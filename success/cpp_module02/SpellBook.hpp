#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include <string>
#include "ASpell.hpp"

class ASpell;

class SpellBook {
    private:
        std::vector<ASpell*> spells;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(const std::string &spell);
        ASpell* createSpell(const std::string &newSpell);
};

#endif