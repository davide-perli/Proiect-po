//
// Created by Admin on 5/19/2024.
//

//implementare singleton design pattern
#ifndef OOP_PROPRIETAR_H
#define OOP_PROPRIETAR_H

#include <iostream>

class Proprietar
{
private:
    std::string numeProprietar;
    std::string email;
    double salariu{};

protected:
    Proprietar() = default; //constructor default in protected ca sa nu fie instantiat in afara clasei

public:

    const std::string &getNumeProprietar() const;

    const std::string &getEmail() const;

    double getSalariu() const;

    void setNumeProprietar(const std::string &numeProprietar);

    void setEmail(const std::string &email_proprietar);

    void setSalariu(double salariu_proprietar);

    static Proprietar& get_instance();


    //toate astea sunt default de la compilator, asa ca le sterg, ca sa fiu sigur ca nu am mai multe instante la obiectul meu cu valori diferite
    Proprietar(const Proprietar&) = delete; //transform constructorul de copiere intr-o functie stearsa ca sa nu existe 2 instante la obiectul singleton
    Proprietar(Proprietar&&) = delete; //sterg constructorul de mutare
    Proprietar& operator=(const Proprietar&) = delete; //sterg operatorul de copiere
    Proprietar& operator=(Proprietar&&) = delete; //sterg operatorul de mutare
};

#endif //OOP_PROPRIETAR_H
