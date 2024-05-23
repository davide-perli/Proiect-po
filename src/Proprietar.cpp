//
// Created by Admin on 5/19/2024.
//

#include "Proprietar.h"

Proprietar &Proprietar::get_instance() //pentru a returna o referinta la obiectul Singleton
{
    static Proprietar instance; //satic ca sa prezerv instanta propietarului si sa nu se creeze mai multe instante
    return instance;
}

const std::string &Proprietar::getNumeProprietar() const {
    return numeProprietar;
}

const std::string &Proprietar::getEmail() const {
    return email;
}

double Proprietar::getSalariu() const {
    return salariu;
}

void Proprietar::setNumeProprietar(const std::string &NumeProprietar) {
    Proprietar::numeProprietar = NumeProprietar;
}

void Proprietar::setEmail(const std::string &email_proprietar) {
    Proprietar::email = email_proprietar;
}

void Proprietar::setSalariu(double salariu_proprietar) {
    Proprietar::salariu = salariu_proprietar;
}
