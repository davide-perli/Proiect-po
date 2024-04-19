//
// Created by Admin on 4/19/2024.
//
//mostenire 2

#include "Manager.h"

Manager::Manager() : salariuLunar(0) {}

void Manager::setNumeManager(const std::string &nume) {
    this->numeManager = nume;
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
