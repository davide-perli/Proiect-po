#include "Comanda.h"

Comanda::Comanda() : Client() {
    this->idComanda = 0;
}

void Comanda::read(std::istream &is) {
    Client::read(is);
    std::cout << "Introduceti id-ul comenzii: ";
    is >> this->idComanda;
}

std::istream &operator>>(std::istream &is, Comanda &c) {
    c.read(is);
    return is;
}

void Comanda::display(std::ostream &os) const {
    Client::display(os);
    os << "id-ul comenzii: " << this->idComanda << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Comanda &c) {
    c.display(os);
    return os;
}

void Comanda::setIdComanda(short i) {
    this->idComanda = i;
}

short Comanda::getIdComanda() const {
    return idComanda;
}

bool Comanda::operator==(const Comanda &other) const {
    return this->idComanda == other.idComanda;
}

bool Comanda::operator<(const Comanda &other) const {
    return this->idComanda < other.idComanda;
}
