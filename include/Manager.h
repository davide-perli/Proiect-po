#ifndef OOP_MANAGER_H
#define OOP_MANAGER_H

#include <iostream>
#include <utility>
#include "Angajati.h"

class Manager : public Angajati {
private:
    std::string numeManager;
    std::string email;
    double salariuLunar;
public:

    // Constructor implicit
    Manager();


    //Manager(const char* nume, std::string  email, const std::string& telefon, double salariuLunar)
//            : Angajati(nume, telefon), email(std::move(email)), salariuLunar(salariuLunar) {}

    //Setteri si getteri
    void setNumeManager(const std::string& manager);

    [[nodiscard]] const std::string& getNumeManager() const;

    void setEmail(const std::string& mail);

    [[nodiscard]] const std::string& getEmail() const;

    void setSalariuLunar(double salariu);

    [[nodiscard]] double getSalariuLunar() const;

    // Implementarea funcției virtuale pure din clasa de bază
    [[nodiscard]] double calculeazaSalariu() const override;
};

#endif //OOP_MANAGER_H
