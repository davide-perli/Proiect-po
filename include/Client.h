//
// Created by Admin on 4/11/2024.
//

#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H
#include <iostream>
class Client
{
private:
    short idClient;
    int pret;
public:

    //constructori

    Client();

    Client([[maybe_unused]] short idClient, [[maybe_unused]] int pret);
    //am reparat aici(cod vechi)
    /*Client(Client& c) : id(++counter)
    {
        c.idClient = idClient;
        c.pret = pret;
    }
        */
    Client(const Client& c);

    //supraincarcare =

    Client& operator=(const Client& c)
    = default;
    //Getters and setters

    [[maybe_unused]] void setIdClient(short ilient);//am renumit idClient in client ca sa scap de eroare de shadow field of 'Client'

    [[maybe_unused]] [[nodiscard]] short getIdClient() const;

    void setPret(int i) ;//rename pret in i ca sa scap de warning de shadow field of 'Client'

    [[nodiscard]] int getPret() const;

    //supraincarcare <<, >> + virtualizare

    virtual void read(std::istream& is);

    friend std::istream& operator>>(std::istream& is, Client& c);

    virtual void display(std::ostream& os) const;

    friend std::ostream& operator<<(std::ostream& os, Client& c);

    //supraincarcare [] pentru a afisa pretul unui obiect ales prin index

    int operator[](int index) const;

    //destructor
    virtual ~Client() = default;
};

Client operator+(const Client& c1, const  Client& c2);
#endif //OOP_CLIENT_H
