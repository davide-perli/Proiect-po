//
// Created by Admin on 4/18/2024.
//

#ifndef OOP_LISTACOMENZI_H
#define OOP_LISTACOMENZI_H
#include <iostream>

template <typename T> class listaComenzi
{
private:
    std::vector<T>lista;
public:
    //constructor
    listaComenzi() = default;
    //supraincarcare << in STL vector pt afisarea listei de obiecte/comenzi;
    friend std::ostream& operator<<(std::ostream& os, listaComenzi& lc)
    {
        for (auto i = lc.lista.begin(); i != lc.lista.end(); i++)
        {
            os << *i;
            std::cout << std::endl;
        }
        return os;
    }

    //supraincarcare +=; -=

    listaComenzi& operator+=(const T& comanda)
    {
        lista.push_back(comanda);
        return *this;
    }

    listaComenzi& operator-=(const T& comanda)
    {
        auto i = find(lista.begin(), lista.end(), comanda);
        if (i != lista.end()) {
            lista.erase(i);
        }
        return *this;
    }


    // Supraincarcarea operatorului [], pentru citirea unui element din vector de la o pozitie data
    T& operator [](size_t index)
    {
        if (index < lista.size())
        {
            return lista[index];
        }
        else
        {
            std::cout << "Index out of bounds";
            static T defaultObject;
            return defaultObject;
        }
    }


};

#endif //OOP_LISTACOMENZI_H
