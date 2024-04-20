//
// Created by Admin on 4/19/2024.
//

#ifndef OOP_NUMARINCORECTEXCEPTION_H
#define OOP_NUMARINCORECTEXCEPTION_H
#include <iostream>

class NumarIncorectException : public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override;
};

#endif //OOP_NUMARINCORECTEXCEPTION_H
