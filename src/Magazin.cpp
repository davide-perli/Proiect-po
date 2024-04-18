//
// Created by Admin on 4/18/2024.
//
#include "Magazin.h"
#include "Arome.h"
#include <iostream>

Magazin::Magazin() {
    this->arome = Fistic;
}

Magazin::Magazin(Arome arome) {
    this->arome = arome;
}

std::istream &operator>>(std::istream &is, Magazin &m) {
    int optiuneEnum = 0;
    std::cout << "\tIntroduceti numarul corespunzator aromei dorite :" << std::endl;
    std::cout << "1. Fistic............................" << std::endl;
    std::cout << "2. Ciocolata........................." << std::endl;
    std::cout << "3. Vanilie..........................." << std::endl;
    std::cout << "4. Fructe............................" << std::endl;
    std::cout << "5. Menta............................." << std::endl;
    std::cout << "6. Caramel..........................." << std::endl;
    std::cout << "7. Kinder............................" << std::endl;
    std::cout << "8. Biscuiti.........................." << std::endl;
    std::cout << "9. Alune............................." << std::endl;
    std::cout << "10. Bubblegum........................." << std::endl;
    is >> optiuneEnum;

    try {
        if (optiuneEnum < 1 || optiuneEnum > 10) {
            throw "Numar incorect";
        }
    } catch (const char* err) {
        std::cout << "Eroare: " << err << std::endl;
    }

    std::cout << "Optiunea aleasa este : " << optiuneEnum << std::endl;


    if (optiuneEnum == 1) {
        m.arome = Fistic;
    } else if (optiuneEnum == 2) {
        m.arome = Ciocolata;
    } else if (optiuneEnum == 3) {
        m.arome = Vanilie;
    } else if (optiuneEnum == 4) {
        m.arome = Fructe;
    } else if (optiuneEnum == 5) {
        m.arome = Menta;
    } else if (optiuneEnum == 6) {
        m.arome = Caramel;
    } else if (optiuneEnum == 7) {
        m.arome = Kinder;
    } else if (optiuneEnum == 8) {
        m.arome = Biscuiti;
    } else if (optiuneEnum == 9) {
        m.arome = Alune;
    } else if (optiuneEnum == 10) {
        m.arome = Bubblegum;
    }
    return is;
}

std::ostream &operator<<(std::ostream &os, const Magazin &m) {
    if (m.arome == Fistic) {
        os << "Aroma: Fistic" << std::endl;
    } else if (m.arome == Ciocolata) {
        os << "Aroma: Ciocolata" << std::endl;
    } else if (m.arome == Vanilie) {
        os << "Aroma: Vanilie" << std::endl;
    } else if (m.arome == Fructe) {
        os << "Aroma: Fructe" << std::endl;
    } else if (m.arome == Menta) {
        os << "Aroma: Menta" << std::endl;
    } else if (m.arome == Caramel) {
        os << "Aroma: Caramel" << std::endl;
    } else if (m.arome == Kinder) {
        os << "Aroma: Kinder" << std::endl;
    } else if (m.arome == Biscuiti) {
        os << "Aroma: Biscuiti" << std::endl;
    } else if (m.arome == Alune) {
        os << "Aroma: Alune" << std::endl;
    } else if (m.arome == Bubblegum) {
        os << "Aroma: Bubblegum" << std::endl;
    }

    return os;
}

void Magazin::setArome(Arome gust)// rename arome for Declaration shadows a field of 'Magazin' warning
{
    this->arome = gust;
}

std::string Magazin::aromeToString(Arome arome) {
    switch (arome) {
        case Fistic:
            return "Fistic";
        case Ciocolata:
            return "Ciocolata";
        case Vanilie:
            return "Vanilie";
        case Fructe:
            return "Fructe";
        case Menta:
            return "Menta";
        case Caramel:
            return "Caramel";
        case Kinder:
            return "Kinder";
        case Biscuiti:
            return "Biscuiti";
        case Alune:
            return "Alune";
        case Bubblegum:
            return "Bubblegum";
        default:
            return "Unknown";
    }
}

std::string Magazin::getArome() const {
    return aromeToString(arome);
}
