//
// Created by Admin on 4/19/2024.
//
//mostenire 2

#include "Manager.h"

// Inițializare membru static
int Manager::numar_angajati = 0;

Manager::Manager() : Angajati(), salariuLunar(0) {
    // Incrementăm numărul de angajați pentru fiecare obiect nou al clasei Manager
    numar_angajati++;
}

Manager::~Manager() {
    // Decrementăm numărul de angajați la fiecare distrugere de obiect Manager
    numar_angajati--;
}


void Manager::setNumeManager(const std::string &manager) {
    this->numeManager = manager;
}

const std::string &Manager::getNumeManager() const {
    return numeManager;
}

void Manager::setEmail(const std::string &mail) {
    this->email = mail;
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

// Metoda statica pentru a accesa numarul de angajati
int Manager::getNumarAngajati() {
    return numar_angajati;
}
