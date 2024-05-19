//
// Created by Admin on 4/15/2024.
//

#ifndef OOP_COMANDA_H
#define OOP_COMANDA_H
#include<iostream>
#include "Client.h"

class Comanda : public Client
{
private:
    short idComanda;
    Client client; //Un client nu exista in baza de date fara comanda => compozitie
public:
    Comanda();

    [[maybe_unused]] Comanda(short idClient, short idComanda, int pret) : Client(idClient, pret)
    {
        this->idComanda = idComanda;
    }

    //Comanda(const Client &c, short idComanda, const Client &client);

    void read(std::istream& is) override;

    friend std::istream& operator>>(std::istream& is, Comanda& c);

    void display(std::ostream& os) const override;

    friend std::ostream& operator<<(std::ostream& os,const Comanda& c);

    //Getters and setters

    [[maybe_unused]] void setIdComanda(short i);

    [[maybe_unused]] [[nodiscard]] short getIdComanda() const;

    //supraincarcare ==, pt STL, -=

    bool operator == (const Comanda& other) const;

    //destructor
    ~Comanda() override = default;
};

#endif //OOP_COMANDA_H
