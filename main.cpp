#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <cstring>

void salutare()
{
    std::cout << "========================================================================================================================" << std::endl;
    std::cout << "\t\t\tBine a-ti venit la magazinul de inghetata Pufic !" <<std::endl;
    std::cout << "========================================================================================================================"<<std::endl;
}

enum Arome
{
    Fistic,
    Ciocolata,
    Vanilie,
    Fructe,
    Menta,
    Caramel,
    Kinder,
    Biscuiti,
    Alune
};

class Client
{
private:

    const int id;
    static int counter;

    short idComanda;
    int pret;
public:

    //constructori

    Client() : id(++counter)
    {
        this->idComanda = 0;
        this->pret = 0;
    }

    Client(short idComanda, int pret) : id(++counter)
    {
        this->idComanda = idComanda;
        this->pret = pret;
    }

    //am reparat aici(cod vechi)
    /*Client(Client& c) : id(++counter)
    {
        c.idComanda = idComanda;
        c.pret = pret;
    }
*/
    Client(const Client& c) : id(++counter)
    {
        idComanda = c.idComanda;
        pret = c.pret;
    }

    //supraincarcare =

    Client& operator=(const Client& c)
    {
        this->idComanda = c.idComanda;
        this->pret = c.pret;

        return*this;
    }
    //Getters and setters

    [[maybe_unused]] void setIdComanda(short comanda)//am renumit idComanda in comanda ca sa scap de eroare de shadow field of 'Client'
    {
        this->idComanda = comanda;
    }

    [[maybe_unused]] [[nodiscard]] short getIdComanda() const
    {
        return idComanda;
    }

    void setPret(int i) //rename pret in i ca sa scap de warning de shadow field of 'Client'
    {
        this->pret = i;
    }
    [[nodiscard]] int getPret() const
    {
        return pret;
    }

    //supraincarcare <<, >> + virtualizare

    virtual void read(std::istream& is)
    {
        std::cout << "Introduceti id-ul comenzii: ";
        is >> this->idComanda;
        std::cout << "Introduceti pretul comenzii: ";
        is >> this->pret;
    }

    friend std::istream& operator>>(std::istream& is, Client& c)
    {
        c.read(is);
        return is;
    }

    virtual void display(std::ostream& os)
    {
        os << "Id-ul comeznii: " << this->idComanda << std::endl;
        os << "Pretul comenzii: " << this->pret << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, Client& c)
    {
        c.display(os);
        return os;
    }

    //supraincarcare == pentru operatorul -= din clasa listaClienti

    bool operator == (const Client& other) const
    {
        return this->idComanda == other.idComanda &&
               this->pret == other.pret;
    }

    //supraincarcare [] pentru a calcula totalul banilor stransnsi de la clienti

    int operator[](int index) const  {
        if (index == 1)
            return this->getPret();
        else
        {
            std::cerr << "Index Out Of Bounds";
            return 0;
        }

    }

    //destructor
    virtual ~Client() = default;
};

int Client::counter = 0;

// alt operator supraîncărcat ca funcție non-membră

Client operator+(const Client& c1,const  Client& c2)
{
    Client rezultat;
    rezultat.setPret(c1.getPret() + c2.getPret());
    return rezultat;
}

class Comanda : public Client
{
private:
    short idClient;
    Client client; //Un client nu exista in baza de date fara comanda => compozitie
public:
    Comanda() : Client()
    {
        this->idClient = 0;
    }

    [[maybe_unused]] Comanda(short idClient, short idComanda, int pret) : Client(idComanda, pret)
    {
        this->idClient = idClient;
    }

    void read(std::istream& is) override
    {
        Client::read(is);
        std::cout << "Introduceti id-ul clientului: ";
        is >> this->idClient;
    }

    friend std::istream& operator>>(std::istream& is, Comanda& c)
    {
        c.read(is);
        return is;
    }

    void display(std::ostream& os) override
    {
        Client::display(os);
        os << "id-ul clientului: " << this->idClient << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, Comanda& c)
    {
        c.display(os);
        return os;
    }

    //Getters and setters

    [[maybe_unused]] void setIdClient(short i)//rename idClient for Declaration shadows a field of 'Comanda'warning
    {
        this->idClient = i;
    }

    [[maybe_unused]] [[nodiscard]] short getIdClient() const
    {
        return idClient;
    }

    //destructor
    ~Comanda() override = default;
};

class Magazin {
private:
    Arome arome;
public:

    //Constructori

    explicit Magazin()
    {
        this->arome = Fistic;
    }
    explicit Magazin(Arome arome)
    {
        this->arome = arome;
    }

    //supraincarcare << , >>

    friend std::istream& operator>>(std::istream& is, Magazin& m)
    {
        int optiuneEnum = 0;
        std::cout << "\tIntroduceti numarul corespunzator aromei dorite -> " << std::endl;
        std::cout << "1. Fistic............................" << std::endl;
        std::cout << "2. Ciocolata........................." << std::endl;
        std::cout << "3. Vanilie..........................." << std::endl;
        std::cout << "4. Fructe............................" << std::endl;
        std::cout << "5. Menta............................." << std::endl;
        std::cout << "6. Caramel..........................." << std::endl;
        std::cout << "7. Kinder............................" << std::endl;
        std::cout << "8. Biscuiti.........................." << std::endl;
        std::cout << "9. Alune............................." << std::endl;
        is >> optiuneEnum;
        std::cout << "Optiunea aleasa este : "<< optiuneEnum <<std::endl;

        if (optiuneEnum == 1) {
            m.arome = Fistic;
        }
        else if (optiuneEnum == 2) {
            m.arome = Ciocolata;
        }
        else if (optiuneEnum == 3) {
            m.arome = Vanilie;
        }
        else if (optiuneEnum == 4) {
            m.arome = Fructe;
        }
        else if (optiuneEnum == 5) {
            m.arome = Menta;
        }
        else if (optiuneEnum == 6) {
            m.arome = Caramel;
        }
        else if (optiuneEnum == 7) {
            m.arome = Kinder;
        }
        else if (optiuneEnum == 8) {
            m.arome = Biscuiti;
        }
        else if (optiuneEnum == 9) {
            m.arome = Alune;
        }
        return is;
    }


    friend std::ostream& operator<<(std::ostream& os, Magazin& m)
    {
        if (m.arome == Fistic) {
            os << "Aroma: Fistic" << std::endl;
        }
        else if (m.arome == Ciocolata) {
            os << "Aroma: Ciocolata" << std::endl;
        }
        else if (m.arome == Vanilie) {
            os << "Aroma: Vanilie" << std::endl;
        }
        else if (m.arome == Fructe) {
            os << "Aroma: Fructe" << std::endl;
        }
        else if (m.arome == Menta) {
            os << "Aroma: Menta" << std::endl;
        }
        else if (m.arome == Caramel) {
            os << "Aroma: Caramel" << std::endl;
        }
        else if (m.arome == Kinder) {
            os << "Aroma: Kinder" << std::endl;
        }
        else if (m.arome == Biscuiti) {
            os << "Aroma: Biscuiti" << std::endl;
        }
        else if (m.arome == Alune) {
            os << "Aroma: Alune" << std::endl;
        }
        return os;
    }

    //Getters and setters

    [[maybe_unused]] void setArome(Arome gust)// rename arome for Declaration shadows a field of 'Magazin' warning
    {
        this->arome = gust;
    }

    [[maybe_unused]] [[nodiscard]] Arome getArome() const
    {
        return arome;
    }



    //destructor

    virtual ~Magazin() = default;

};

class Angajati
{
private:
    Magazin magazin; // agregare 'has a'
    char* nume;
    std::string telefon;
public:

    //constructori
    Angajati()
    {
        this->nume = nullptr;
        this->telefon = " ";
    }
    Angajati(const char* nume, std::string telefon)
    {
        this->nume = new char[strlen(nume) + 1];
        //strcpy_s(this->nume, strlen(nume) + 1, nume);
        strcpy(this -> nume, nume);

        this->telefon = std::move(telefon); //habar nu am ce face, dar scot un warning asa
    }

    //suipraincarcare << , >>

    friend std::istream& operator>>(std::istream& is, Angajati& a)
    {
        a.nume = new char[100];
        std::cout << "Introduceti numele angajatului: ";
        is.getline(a.nume, 100);
        std::cout << "Introduceti telefonul angajatului: ";
        is >> a.telefon;
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, Angajati& a)
    {
        os << "Numele angajatului: " << a.nume << std::endl;
        os << "Telefonul angajatului : " << a.telefon << std::endl;
        return os;
    }

    //Getters and setters

    [[maybe_unused]] void setNume(const char *str)//rename char *nume pentru Declaration shadows a field of 'Angajati' warning
    {
        //if (this->nume != nullptr)//Clang-Tidy: 'if' statement is unnecessary; deleting null pointer has no effect
            delete[] this->nume;

        this->nume = new char[strlen(str) + 1];
        strcpy_s(this->nume, strlen(str) + 1, str);
    }

    [[maybe_unused]] [[nodiscard]] const char *getNume() const
    {
        return nume;
    }

    [[maybe_unused]] void setTelefon(const std::string &basicString)//replacement of &telefon beacuse of Declaration shadows a field of 'Angajati' warning
    {
        this->telefon = basicString;
    }

    [[maybe_unused]] [[nodiscard]] const std::string &getTelefon() const
    {
        return telefon;
    }

    //destructor
    ~Angajati()
    {
        //if (this->nume != nullptr)//Clang-Tidy: 'if' statement is unnecessary; deleting null pointer has no effect
            delete[] this->nume;
    }
};


int main()
{

    salutare();

    Client c, c1(10, 20), c2(20, 30), c3(50, 60) ;

    int pretTotal = c1[1]+c2[1]+c3[1];

    std::cout << pretTotal<<std::endl;

    Magazin m(Kinder);
    Angajati a1("Andrei", "072876347628");

    std::cin>>m;
    std::cout << m;
    std::cout << a1;
}