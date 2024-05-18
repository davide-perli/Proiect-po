//
// Created by Admin on 4/18/2024.
//

//schimb enumul cu containerul std::list

#ifndef OOP_AROME_H
#define OOP_AROME_H

#include <iostream>
#include <list>
#include <string>

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
