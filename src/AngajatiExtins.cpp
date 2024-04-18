// Created by Admin on 4/18/2024.
//
#include "AngajatiExtins.h"

AngajatiExtins::AngajatiExtins() : Angajati(), salariu(0), oreLucrate(0) {}

[[maybe_unused]] AngajatiExtins::AngajatiExtins(const char *nume, const std::string &telefon, double salariu, int oreLucrate)
        : Angajati(nume, telefon), salariu(salariu), oreLucrate(oreLucrate) {}

[[maybe_unused]] void AngajatiExtins::setSalariu(double d) {
    this->salariu = d;
}

[[maybe_unused]] double AngajatiExtins::getSalariu() const {
    return salariu;
}

[[maybe_unused]] void AngajatiExtins::setOreLucrate(int lucrate) {
    this->oreLucrate = lucrate;
}

[[maybe_unused]] int AngajatiExtins::getOreLucrate() const {
    return oreLucrate;
}

std::istream &operator>>(std::istream &is, AngajatiExtins &a) {
    is >> static_cast<Angajati&>(a); // Citim informațiile pentru Angajati (clasa de bază)
    std::cout << "Introduceti salariul: ";
    is >> a.salariu;
    std::cout << "Introduceti numarul de ore lucrate: ";
    is >> a.oreLucrate;
    return is;
}

std::ostream &operator<<(std::ostream &os, const AngajatiExtins &a) {
    os << static_cast<const Angajati&>(a); // Apelează operatorul << pentru Angajati (clasa de bază)
    os << "Salariu: " << a.salariu << std::endl;
    os << "Ore lucrate: " << a.oreLucrate << std::endl;
    return os;
}
