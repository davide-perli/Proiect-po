//
// Created by Admin on 4/18/2024.
//

#ifndef OOP_ANGAJATI_H
#define OOP_ANGAJATI_H
#include "Magazin.h"
#include <cstring>

class Angajati
{
protected:  // Am schimbat accesul la membrii protejați pentru a fi accesibili claselor derivate
    Magazin magazin; // agregare 'has a'
    char* nume;
    std::string telefon;
public:

    //constructori
    Angajati();
    Angajati(const char* nume, std::string telefon);

    [[maybe_unused]] Angajati(const Angajati &a);

    Angajati& operator=(const Angajati& other);

    //suipraincarcare << , >>

    friend std::istream& operator>>(std::istream& is, Angajati& a);

    friend std::ostream& operator<<(std::ostream& os, const Angajati& a);

    //Getters and setters

    [[maybe_unused]] void setNume(const char* str);

    [[maybe_unused]] [[nodiscard]] const char* getNume() const;

    [[maybe_unused]] void setTelefon(const std::string& basicString);

    [[maybe_unused]] [[nodiscard]] const std::string& getTelefon() const;

    //destructor virtual
    virtual ~Angajati();

    [[nodiscard]] virtual double calculeazaSalariu() const = 0;

};

#endif //OOP_ANGAJATI_H