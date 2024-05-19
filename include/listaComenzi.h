// Created by Admin on 4/18/2024.
//

#ifndef OOP_LISTACOMENZI_H
#define OOP_LISTACOMENZI_H
#include <iostream>
#include <list>

template <typename T> class listaComenzi
{
private:
    std::list<T> lista; // am schimbat std::vector cu std::list
public:
    //constructor
    listaComenzi() = default;

    // Supraincarcare << pentru afisarea listei de obiecte/comenzi;
    friend std::ostream& operator<<(std::ostream& os,const listaComenzi& lc)
    {
        for (const auto& elem : lc.lista)
        {
            os << elem << std::endl;
        }
        return os;
    }

    // Supraincarcare += pentru adăugarea unei comenzi
    listaComenzi& operator+=(const T& comanda)
    {
        lista.push_back(comanda);
        return *this;
    }

    // Supraincarcare -= pentru eliminarea unei comenzi
    listaComenzi& operator-=(const T& comanda)
    {
        lista.remove(comanda);
        return *this;
    }

    // Supraincarcarea operatorului [] pentru citirea unui element de la o anumită poziție
    T& operator[](size_t index)
    {
        auto it = lista.begin();
        std::advance(it, index);
        return *it;
    }
};

#endif //OOP_LISTACOMENZI_H
