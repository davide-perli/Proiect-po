#ifndef OOP_COMANDA_H
#define OOP_COMANDA_H

#include <iostream>
#include "Client.h"

class Comanda : public Client {
private:
    short idComanda;
    Client client; // Un client nu exista in baza de date fara comanda => compozitie
public:
    Comanda();

    [[maybe_unused]] Comanda(short idClient, short idComanda, int pret) : Client(idClient, pret) {
        this->idComanda = idComanda;
    }

    void read(std::istream& is) override;

    friend std::istream& operator>>(std::istream& is, Comanda& c);

    void display(std::ostream& os) const override;

    friend std::ostream& operator<<(std::ostream& os, const Comanda& c);

    [[maybe_unused]] void setIdComanda(short i);

    [[maybe_unused]] [[nodiscard]] short getIdComanda() const;

    bool operator==(const Comanda& other) const;
    bool operator<(const Comanda& other) const; // Declarația operatorului <

    ~Comanda() override = default;
};

#endif // OOP_COMANDA_H
