//
// Created by Admin on 5/19/2024.
//

#include "Proprietar.h"

Proprietar &Proprietar::get_instance() //pentru a returna o referinta la obiectul Singleton
{
    static Proprietar instance; //satic ca sa prezerv instanta propietarului si sa nu se creeze mai multe instante
    return instance;
}
