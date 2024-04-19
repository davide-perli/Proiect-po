//
// Created by Admin on 4/19/2024.
//
#include "NumarIncorectException.h"

const char *NumarIncorectException::what() const noexcept {
    return "Numar incorect, setare valoare default 1.Fistic";
}
