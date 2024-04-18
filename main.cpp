#include <iostream>
#include <string>
//#include <utility>
#include <vector>
#include <algorithm>
#include <thread>
#include "Client.h"
#include "Comanda.h"
#include "Magazin.h"
#include "Angajati.h"
#include "AngajatiExtins.h"
#include "listaComenzi.h"

void salutare()
{
    std::cout << "========================================================================================================================" << std::endl;
    std::cout << "\t\t\tBine ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "ati ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "venit ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "la ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "magazinul ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "de ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "inghetata ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "Pufic";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << std::endl;
    std::cout << "========================================================================================================================" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));

    for (int i = 0; i < 13; i++) {
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

}

//    enum Arome
//    {
//        Fistic,
//        Ciocolata,
//        Vanilie,
//        Fructe,
//        Menta,
//        Caramel,
//        Kinder,
//        Biscuiti,
//        Alune,
//        Bubblegum
//    };



   /* class Client
    {
    private:
        short idClient;
        int pret;
    public:

        //constructori

        Client()
        {
            this->idClient = 0;
            this->pret = 0;
        }

        Client(short idClient, int pret)
        {
            this->idClient = idClient;
            this->pret = pret;
        }

        //am reparat aici(cod vechi)
        *//*Client(Client& c) : id(++counter)
        {
            c.idClient = idClient;
            c.pret = pret;
        }
            *//*
        Client(const Client& c)
        {
            idClient = c.idClient;
            pret = c.pret;
        }

        //supraincarcare =

        Client& operator=(const Client& c)
        = default;
        //Getters and setters

        [[maybe_unused]] void setIdClient(short ilient)//am renumit idClient in client ca sa scap de eroare de shadow field of 'Client'
        {
            this->idClient = ilient;
        }

        [[maybe_unused]] [[nodiscard]] short getIdClient() const
        {
            return idClient;
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
            std::cout << "Introduceti id-ul clientului: ";
            is >> this->idClient;
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
            os << "Id-ul comeznii: " << this->idClient << std::endl;
            os << "Pretul comenzii: " << this->pret << std::endl;
        }

        friend std::ostream& operator<<(std::ostream& os, Client& c)
        {
            c.display(os);
            return os;
        }

        //supraincarcare [] pentru a afisa pretul unui obiect ales prin index

        int operator[](int index) const {
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
    };*/

// alt operator supraîncărcat ca funcție non-membră

  /*  Client operator+(const Client& c1, const  Client& c2)
    {
        Client rezultat;
        rezultat.setPret(c1.getPret() + c2.getPret());
        return rezultat;
    }*/

//    class Comanda : public Client
//    {
//    private:
//        short idComanda;
//        Client client; //Un client nu exista in baza de date fara comanda => compozitie
//    public:
//        Comanda() : Client()
//        {
//            this->idComanda = 0;
//        }
//
//        [[maybe_unused]] Comanda(short idClient, short idComanda, int pret) : Client(idClient, pret)
//        {
//            this->idComanda = idComanda;
//        }
//
//        void read(std::istream& is) override
//        {
//            Client::read(is);
//            std::cout << "Introduceti id-ul comenzii: ";
//            is >> this->idComanda;
//        }
//
//        friend std::istream& operator>>(std::istream& is, Comanda& c)
//        {
//            c.read(is);
//            return is;
//        }
//
//        void display(std::ostream& os) override
//        {
//            Client::display(os);
//            os << "id-ul comenzii: " << this->idComanda << std::endl;
//        }
//
//        friend std::ostream& operator<<(std::ostream& os, Comanda& c)
//        {
//            c.display(os);
//            return os;
//        }
//
//        //Getters and setters
//
//        [[maybe_unused]] void setIdComanda(short i)//rename idComanda for Declaration shadows a field of 'Comanda' warning
//        {
//            this->idComanda = i;
//        }
//
//        [[maybe_unused]] [[nodiscard]] short getIdComanda() const
//        {
//            return idComanda;
//        }
//
//        //supraincarcare ==, pt STL, -=
//
//        bool operator == (const Comanda& other) const
//        {
//            return this->idComanda == other.idComanda;
//        }
//
//        //destructor
//        ~Comanda() override = default;
//    };

//    class Magazin {
//    private:
//        Arome arome;
//    public:
//
//        //Constructori
//
//        explicit Magazin()
//        {
//            this->arome = Fistic;
//        }
//        explicit Magazin(Arome arome)
//        {
//            this->arome = arome;
//        }
//
//        //supraincarcare << , >>
//
//        friend std::istream& operator>>(std::istream& is, Magazin& m)
//        {
//            int optiuneEnum = 0;
//            std::cout << "\tIntroduceti numarul corespunzator aromei dorite :" << std::endl;
//            std::cout << "1. Fistic............................" << std::endl;
//            std::cout << "2. Ciocolata........................." << std::endl;
//            std::cout << "3. Vanilie..........................." << std::endl;
//            std::cout << "4. Fructe............................" << std::endl;
//            std::cout << "5. Menta............................." << std::endl;
//            std::cout << "6. Caramel..........................." << std::endl;
//            std::cout << "7. Kinder............................" << std::endl;
//            std::cout << "8. Biscuiti.........................." << std::endl;
//            std::cout << "9. Alune............................." << std::endl;
//            std::cout << "10. Bubblegum........................." << std::endl;
//            is >> optiuneEnum;
//            std::cout << "Optiunea aleasa este : " << optiuneEnum << std::endl;
//
//
//            if (optiuneEnum == 1) {
//                m.arome = Fistic;
//            }
//            else if (optiuneEnum == 2) {
//                m.arome = Ciocolata;
//            }
//            else if (optiuneEnum == 3) {
//                m.arome = Vanilie;
//            }
//            else if (optiuneEnum == 4) {
//                m.arome = Fructe;
//            }
//            else if (optiuneEnum == 5) {
//                m.arome = Menta;
//            }
//            else if (optiuneEnum == 6) {
//                m.arome = Caramel;
//            }
//            else if (optiuneEnum == 7) {
//                m.arome = Kinder;
//            }
//            else if (optiuneEnum == 8) {
//                m.arome = Biscuiti;
//            }
//            else if (optiuneEnum == 9) {
//                m.arome = Alune;
//            }
//            else if (optiuneEnum == 10) {
//                m.arome = Bubblegum;
//            }
//            return is;
//        }
//
//
//        friend std::ostream& operator<<(std::ostream& os, const Magazin& m)
//        {
//            if (m.arome == Fistic) {
//                os << "Aroma: Fistic" << std::endl;
//            }
//            else if (m.arome == Ciocolata) {
//                os << "Aroma: Ciocolata" << std::endl;
//            }
//            else if (m.arome == Vanilie) {
//                os << "Aroma: Vanilie" << std::endl;
//            }
//            else if (m.arome == Fructe) {
//                os << "Aroma: Fructe" << std::endl;
//            }
//            else if (m.arome == Menta) {
//                os << "Aroma: Menta" << std::endl;
//            }
//            else if (m.arome == Caramel) {
//                os << "Aroma: Caramel" << std::endl;
//            }
//            else if (m.arome == Kinder) {
//                os << "Aroma: Kinder" << std::endl;
//            }
//            else if (m.arome == Biscuiti) {
//                os << "Aroma: Biscuiti" << std::endl;
//            }
//            else if (m.arome == Alune) {
//                os << "Aroma: Alune" << std::endl;
//            }
//            else if (m.arome == Bubblegum) {
//                os << "Aroma: Bubblegum" << std::endl;
//            }
//
//            return os;
//        }

        //Getters and setters

//        [[maybe_unused]] void setArome(Arome gust)// rename arome for Declaration shadows a field of 'Magazin' warning
//        {
//            this->arome = gust;
//        }
//
//        static std::string aromeToString(Arome arome) {
//            switch (arome) {
//                case Fistic:
//                    return "Fistic";
//                case Ciocolata:
//                    return "Ciocolata";
//                case Vanilie:
//                    return "Vanilie";
//                case Fructe:
//                    return "Fructe";
//                case Menta:
//                    return "Menta";
//                case Caramel:
//                    return "Caramel";
//                case Kinder:
//                    return "Kinder";
//                case Biscuiti:
//                    return "Biscuiti";
//                case Alune:
//                    return "Alune";
//                case Bubblegum:
//                    return "Bubblegum";
//                default:
//                    return "Unknown";
//            }
//        }
//
//        [[nodiscard]] std::string getArome() const
//        {
//            return aromeToString(arome);
//        }
//
//
//
//
//        //destructor
//
//        virtual ~Magazin() = default;
//
//    };

//    class Angajati
//    {
//    private:
//        Magazin magazin; // agregare 'has a'
//        char* nume;
//        std::string telefon;
//    public:
//
//        //constructori
//        Angajati()
//        {
//            this->nume = nullptr;
//            this->telefon = " ";
//        }
//        Angajati(const char* nume, std::string telefon)
//        {
//            this->nume = new char[strlen(nume) + 1];
//            //strcpy_s(this->nume, strlen(nume) + 1, nume);
//            strcpy(this->nume, nume);
//
//            this->telefon = std::move(telefon);
//        }
//
//        Angajati(const Angajati &a)
//        {
//            this->nume = new char[strlen(a.nume) + 1];
//            strcpy(this->nume, a.nume);
//
//            this->telefon = a.telefon;
//        }
//
//        Angajati& operator=(const Angajati& other)
//        {
//            if (this != &other)
//            {
//                delete[] this->nume;
//
//                this->nume = new char[strlen(other.nume) + 1];
//                strcpy(this->nume, other.nume);
//
//                this->telefon = other.telefon;
//            }
//            return *this;
//        }
//
//        //suipraincarcare << , >>
//
//        friend std::istream& operator>>(std::istream& is, Angajati& a)
//        {
//            const int bufferSize = 100;
//            char buffer[bufferSize];
//            std::cout << "Introduceti numele angajatului: ";
//            is >> buffer;
//            a.nume = new char[strlen(buffer) + 1];
//            strcpy(a.nume, buffer);
//            std::cout << "Introduceti telefonul angajatului: ";
//            is >> a.telefon;
//            return is;
//        }
//
//        friend std::ostream& operator<<(std::ostream& os, const Angajati& a)
//        {
//            os << "Numele angajatului: " << a.nume << std::endl;
//            os << "Telefonul angajatului : " << a.telefon << std::endl;
//            return os;
//        }
//
//        //Getters and setters
//
//        [[maybe_unused]] void setNume(const char* str)//rename char *nume pentru Declaration shadows a field of 'Angajati' warning
//        {
//            //if (this->nume != nullptr)//Clang-Tidy: 'if' statement is unnecessary; deleting null pointer has no effect
//            delete[] this->nume;
//
//            this->nume = new char[strlen(str) + 1];
//            //strcpy_s(this->nume, strlen(str) + 1, str);
//            strcpy(this->nume, str);
//        }
//
//        [[maybe_unused]] [[nodiscard]] const char* getNume() const
//        {
//            return nume;
//        }
//
//        [[maybe_unused]] void setTelefon(const std::string& basicString)//replacement of &telefon beacuse of Declaration shadows a field of 'Angajati' warning
//        {
//            this->telefon = basicString;
//        }
//
//        [[maybe_unused]] [[nodiscard]] const std::string& getTelefon() const
//        {
//            return telefon;
//        }
//
//        //destructor
//        ~Angajati()
//        {
//            //if (this->nume != nullptr)//Clang-Tidy: 'if' statement is unnecessary; deleting null pointer has no effect
//            delete[] this->nume;
//        }
//    };

//    template <typename T> class listaComenzi
//    {
//    private:
//        std::vector<T>lista;
//    public:
//        //constructor
//        listaComenzi() = default;
//        //supraincarcare << in STL vector pt afisarea listei de obiecte/comenzi;
//        friend std::ostream& operator<<(std::ostream& os, listaComenzi& lc)
//        {
//            for (auto i = lc.lista.begin(); i != lc.lista.end(); i++)
//            {
//                os << *i;
//                std::cout << std::endl;
//            }
//            return os;
//        }
//
//        //supraincarcare +=; -=
//
//        listaComenzi& operator+=(const T& comanda)
//        {
//            lista.push_back(comanda);
//            return *this;
//        }
//
//        listaComenzi& operator-=(const T& comanda)
//        {
//            auto i = find(lista.begin(), lista.end(), comanda);
//            if (i != lista.end()) {
//                lista.erase(i);
//            }
//            return *this;
//        }
//
//
//        // Supraincarcarea operatorului [], pentru citirea unui element din vector de la o pozitie data
//        T& operator [](size_t index)
//        {
//            if (index < lista.size())
//            {
//                return lista[index];
//            }
//            else
//            {
//                std::cout << "Index out of bounds";
//                static T defaultObject;
//                return defaultObject;
//            }
//        }
//
//
//    };
    int main()
    {
        //Mesaj de bun venit
        salutare();

        unsigned int indexLista, nrObj;
        //MAGAZIN
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        std::cout << "Clasa magazin: " << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        std::cout << "Constructor fara parametrii: ";
        std::cout << std::endl;
        Magazin m,m1,m2(Kinder);
        std::cin >> m1;
        std::cout << std::endl;
        std::cout << m1 << std::endl;
        std::cout << "======================================================================================================================="<<std::endl;
        //constructor cu parametrii
        std::cout << std::endl;
        std::cout << "Constructor cu parametrii: " << std::endl;
        std::cout << m2 << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;

        //getter/setter:
        std::cout << std::endl;
        std::cout << "Getter && Setter: "<<std::endl;

        m.setArome(Vanilie);
        std::cout << std::endl;
        std::cout<<m.getArome()<<std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //ANGAJATI
        //constructori
        std::cout << "Clasa angajati: " << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        Angajati a, a1, a2("Davide", "07243435345");
        AngajatiExtins a3, angajat("John", "1234567890", 2000, 40);
        std::cin >> a3;
        std::cout << std::endl;
        std::cout << a3;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        std::cout << a2;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //testare getteri si setteri
        angajat.setSalariu(2500);
        double salariu = angajat.getSalariu();
        std::cout << "Salariu: " << salariu << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;

        angajat.setOreLucrate(45);
        int oreLucrate = angajat.getOreLucrate();
        std::cout << "Ore lucrate: " << oreLucrate << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;

        //getter/setter
        std::cout << "Getter && Setter:" << std::endl;
        a.setNume("Andrei");
        std::cout << std::endl;
        std::cout << a.getNume()<<std::endl;
        a.setTelefon("0723574657");
        std::cout << a.getTelefon();
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //CLIENT
        //constructori
        std::cout << "Clasa Client: " << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        Client c, c1, c2(100, 799), c3(c2), cEgal;
        std::cin >> c1;
        std::cout << std::endl;
        std::cout << c1;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        std::cout << c2;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //operator =

        cEgal = c2;
        std::cout << "Supraincarcarea lui = pt copiere: " << std::endl;
        std::cout << std::endl;
        std::cout << cEgal;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //getter/setter
        std::cout << "Getter && Setter:" << std::endl;
        c.setIdClient(101);
        std::cout << std::endl;
        std::cout << c.getIdClient() << std::endl;
        c.setPret(1699);
        std::cout << c.getPret();
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //COMANDA
        //constructori
        std::cout << "Clasa Comanda: " << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        Comanda co, co1, co2(102, 201, 900),co3(104,204,800);
        std::cin >> co1;
        std::cout << std::endl;
        std::cout << co1;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        std::cout << co2;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //getter/setter
        std::cout << "Getter && Setter:" << std::endl;
        co.setIdComanda(203);
        std::cout << std::endl;
        std::cout << co.getIdComanda() << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        // operatorul + supraîncărcat ca funcție non-membră

        int pretTotal = c1[1] + c2[1] + c3[1];
        std::cout << "Pretul total este de: " << pretTotal << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //LISTACOMENZI

        std::cout << "Clasa listaComenzi: " << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        listaComenzi<Comanda> lc;
        lc += co1;
        lc += co2;
        lc += co3;
        lc -= co2;
        std::cout << "Lista de comenzi a obiectelor co1, co2, co3, fara co2: " << std::endl;
        std::cout << std::endl;
        std::cout << lc;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //operatorul [], pentru citirea unui element din vector de la o pozitie data

        std::cout << "Supraincarcarea operatorului [] " << std::endl;
        std::cout << std::endl;
        std::cout << "Dati indexul din lista pe care il doriti afisat (0 sau 1) : ";
        std::cin >> indexLista;
        std::cout << std::endl;
        std::cout << lc[indexLista] << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

        //citirea a n elemente
        std::cout << "Dati numarul de obiecte (comenzi) ce doriti citite: ";
        std::cin >> nrObj;

        for (unsigned int i = 0; i < nrObj; i++)
        {
            std::cin >> co;
            std::cout << std::endl;
            std::cout << co;
            std::cout << std::endl;

        }
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;

    }