#include <iostream>
#include <string>
//#include <utility>
#include <vector>
#include <algorithm>
#include <thread>
#include "Client.h"
#include "Comanda.h"
#include "Magazin.h"
#include "AngajatiExtins.h"
#include "Manager.h"
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
        std::cout << "Clasa Angajati si clasa AngajatiExtins cu mostenire: " << std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        AngajatiExtins a, a3, angajat("John", "1234567890", 2000, 40);
        std::cin >> a3;
        std::cout << "\n Salariul anual al angajatului este : " << a3.calculeazaSalariu() <<std::endl;
        std::cout << a3;

        //upcasting
        Angajati *ptr = &a3;
        std::cout << "Salariul anual al angajatului este : "<< ptr->calculeazaSalariu() << std::endl;

        //downcasting
        auto* e = dynamic_cast<AngajatiExtins*>(ptr);
        if(e){
            std::cout << std::endl;
            std::cout<< "Verificare downcast " << e -> calculeazaSalariu() << std::endl;
        }
        else{
            std::cout << std::endl;
            std::cout << "Downcast esuat" << std::endl;
        }

        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        std::cout << std::endl;
        std::cout << angajat;
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

        Manager man;
        man.setNumeManager("Davide");
        man.setEmail("artchanell01@gmail.com");
        man.setTelefon("0775101171");
        man.setSalariuLunar(10000);
        std::cout << "Clasa Manager mostenita din Angajati : " <<  std::endl;
        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;
        // Afisare informatii despre manager
        std::cout << "Nume manager: " << man.getNumeManager() << std::endl;

        std::cout << "Email: " << man.getEmail() << std::endl;

        std::cout << "Salariu lunar: " << man.getSalariuLunar() << std::endl;

        std::cout << "Salariul anual: " << man.calculeazaSalariu() << std::endl;

        std::cout << std::endl;
        std::cout << "=======================================================================================================================" << std::endl;

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