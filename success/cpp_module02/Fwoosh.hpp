#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"
#include <string>
#include <iostream>

class Fwoosh : public ASpell {
    public:
        Fwoosh();
        ~Fwoosh();
        virtual ASpell* clone() const;
};

#endif