//
// Created by Admin on 4/18/2024.
//
#include "Angajati.h"

Angajati::Angajati() {
    this->nume = nullptr;
    this->telefon = " ";
}

Angajati::Angajati(const char *nume, std::string telefon) {
    this->nume = new char[strlen(nume) + 1];
    //strcpy_s(this->nume, strlen(nume) + 1, nume);
    strcpy(this->nume, nume);

    this->telefon = std::move(telefon);
}

[[maybe_unused]] Angajati::Angajati(const Angajati &a) {
    this->nume = new char[strlen(a.nume) + 1];
    strcpy(this->nume, a.nume);

    this->telefon = a.telefon;
}

Angajati &Angajati::operator=(const Angajati &other) {
    if (this != &other)
    {
        delete[] this->nume;

        this->nume = new char[strlen(other.nume) + 1];
        strcpy(this->nume, other.nume);

        this->telefon = other.telefon;
    }
    return *this;
}

std::istream &operator>>(std::istream &is, Angajati &a) {
    const int bufferSize = 100;
    char buffer[bufferSize];
    std::cout << "Introduceti numele angajatului: ";
    is >> buffer;
    a.nume = new char[strlen(buffer) + 1];
    strcpy(a.nume, buffer);
    std::cout << "Introduceti telefonul angajatului: ";
    is >> a.telefon;
    return is;
}

std::ostream &operator<<(std::ostream &os, const Angajati &a) {
    os << "Numele angajatului: " << a.nume << std::endl;
    os << "Telefonul angajatului : " << a.telefon << std::endl;
    return os;
}

void Angajati::setNume(const char *str)//rename char *nume pentru Declaration shadows a field of 'Angajati' warning
{
    //if (this->nume != nullptr)//Clang-Tidy: 'if' statement is unnecessary; deleting null pointer has no effect
    delete[] this->nume;

    this->nume = new char[strlen(str) + 1];
    //strcpy_s(this->nume, strlen(str) + 1, str);
    strcpy(this->nume, str);
}

const char *Angajati::getNume() const {
    return nume;
}

void Angajati::setTelefon(const std::string &basicString)//replacement of &telefon beacuse of Declaration shadows a field of 'Angajati' warning
{
    this->telefon = basicString;
}

const std::string &Angajati::getTelefon() const {
    return telefon;
}

Angajati::~Angajati() {
    //if (this->nume != nullptr)//Clang-Tidy: 'if' statement is unnecessary; deleting null pointer has no effect
    delete[] this->nume;
}
