//
// Created by Admin on 4/18/2024.
//

//schimb enumul cu containerul std::list

#ifndef OOP_AROME_H
#define OOP_AROME_H

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

class Arome {
public:
    // Returneaza lista de arome
    [[maybe_unused]] static std::list<std::string> getArome() {
        return {
                "Fistic",
                "Ciocolata",
                "Vanilie",
                "Fructe",
                "Menta",
                "Caramel",
                "Kinder",
                "Biscuiti",
                "Alune",
                "Bubblegum"
        };
    }

    // Sorteaza lista de arome in ordine alfabetica  cu algoritm cu functie lambda
    static void sortareArome() {
        std::list<std::string> arome = getArome();

        arome.sort([](const std::string& a, const std::string& b) {
            return a < b;
        });

        std::cout << "Arome sortate in ordine alfabetica : " << std::endl;
        int index = 1;
        for (const auto& aroma : arome) {
            std::cout << index++ << "." << aroma << "......................................." << std::endl;
        }
        std::cout << std::endl;
    }
};

//enum Arome
//{
//    Fistic,
//    Ciocolata,
//    Vanilie,
//    Fructe,
//    Menta,
//    Caramel,
//    Kinder,
//    Biscuiti,
//    Alune,
//    Bubblegum
//};

#endif //OOP_AROME_H
