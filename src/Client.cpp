#include "Client.h"
// Created by Admin on 4/11/2024.
//
Client::Client() {
    this->idClient = 0;
    this->pret = 0;
}

Client::Client([[maybe_unused]] short idClient, [[maybe_unused]] int pret) {
    this->idClient = 0;
    this->pret = 0;
}

Client::Client(const Client &c) {
    idClient = c.idClient;
    pret = c.pret;
}

void Client::setIdClient(short ilient) {
    this->idClient = ilient;

}

short Client::getIdClient() const {
    return idClient;
}

void Client::setPret(int i) {
    this->pret = i;
}

int Client::getPret() const {
    return pret;
}

void Client::read(std::istream &is) {
    std::cout << "Introduceti id-ul clientului: ";
    is >> this->idClient;
    std::cout << "Introduceti pretul comenzii: ";
    is >> this->pret;
}

std::istream &operator>>(std::istream &is, Client &c) {
    c.read(is);
    return is;
}

void Client::display(std::ostream &os) const {
    os << "Id-ul comeznii: " << this->idClient << std::endl;
    os << "Pretul comenzii: " << this->pret << std::endl;
}

std::ostream &operator<<(std::ostream &os, Client &c) {
    c.display(os);
    return os;
}

Client operator+(const Client &c1, const Client &c2) {
    Client rezultat;
    rezultat.setPret(c1.getPret() + c2.getPret());
    return rezultat;
}

int Client::operator[](int index) const {
    if (index == 1)
        return this->getPret();
    else
    {
        std::cerr << "Index Out Of Bounds";
        return 0;
    }
}
