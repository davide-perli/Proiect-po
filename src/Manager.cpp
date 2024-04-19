//
// Created by Admin on 4/19/2024.
//
//mostenire 2

#include "Manager.h"

Manager::Manager() : Angajati(), salariuLunar(0) {}

void Manager::setNumeManager(const std::string &manager) {
    Angajati::setNume(manager.c_str()); // Utilizează numeManager în loc de nume, poate asta rezolva problema din asan windows 2022 msvc 19.38
}

const std::string &Manager::getNumeManager() const {
    return numeManager;
}

void Manager::setEmail(const std::string &mail) {
    this -> email = mail;
}

const std::string &Manager::getEmail() const {
    return email;
}

void Manager::setSalariuLunar(double salariu) {
    this->salariuLunar = salariu;
}

double Manager::getSalariuLunar() const {
    return salariuLunar;
}

double Manager::calculeazaSalariu() const {
    double salariuAnual = salariuLunar * 12;
    return salariuAnual;
}
