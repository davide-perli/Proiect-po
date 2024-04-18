//
// Created by Admin on 4/18/2024.
//

#ifndef OOP_MAGAZIN_H
#define OOP_MAGAZIN_H
#include "Arome.h"
#include <iostream>

class Magazin {
private:
    Arome arome;
public:

    //Constructori

    explicit Magazin();

    explicit Magazin(Arome arome);

    //supraincarcare << , >>

    friend std::istream &operator>>(std::istream &is, Magazin &m);


    friend std::ostream &operator<<(std::ostream &os, const Magazin &m);

    [[maybe_unused]] void setArome(Arome gust);

    static std::string aromeToString(Arome arome);

    [[nodiscard]] std::string getArome() const;




    //destructor

    virtual ~Magazin() = default;

};

#endif //OOP_MAGAZIN_H