#ifndef OOP_MAGAZIN_H
#define OOP_MAGAZIN_H

#include <string>
#include "Arome.h"
#include "NumarIncorectException.h"

class Magazin {
public:
    explicit Magazin();

    [[maybe_unused]] explicit Magazin(const std::string& arome);

    friend std::istream &operator>>(std::istream &is, Magazin &m);
    friend std::ostream &operator<<(std::ostream &os, const Magazin &m);

    void setArome(const std::string& gust);
    [[nodiscard]] std::string getArome() const;

    virtual ~Magazin() = default;

private:
    std::string arome;

    static std::string aromeToString(const std::string& arome);
};

#endif //OOP_MAGAZIN_H
