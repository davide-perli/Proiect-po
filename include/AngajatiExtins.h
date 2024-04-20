//
// Created by Admin on 4/18/2024.
//

//mostenire 1
#ifndef OOP_ANGAJATIEXTINS_H
#define OOP_ANGAJATIEXTINS_H
#include <iostream>
#include "Angajati.h"

class AngajatiExtins : virtual public Angajati {
private:
    double salariu;
    int oreLucrate;
public:
    AngajatiExtins();

    [[maybe_unused]] AngajatiExtins(const char* nume, const std::string& telefon, double salariu, int oreLucrate);

    // Getter si setter pentru salariu
    [[maybe_unused]] void setSalariu(double d);

    [[maybe_unused]] [[nodiscard]] double getSalariu() const;

    // Getter si setter pentru numarul de ore lucrate
    [[maybe_unused]] void setOreLucrate(int lucrate);

    [[maybe_unused]] [[nodiscard]] int getOreLucrate() const;

    [[nodiscard]] double calculeazaSalariu() const override;

    // Suprascrierea operatorului << pentru afișarea informațiilor despre angajați extinși
    friend std::istream& operator>>(std::istream& is, AngajatiExtins& a);
    friend std::ostream& operator<<(std::ostream& os, const AngajatiExtins& a);
};



#endif //OOP_ANGAJATIEXTINS_H
