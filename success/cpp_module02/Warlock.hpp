#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class ASpell;

class Warlock {
    private:
        std::string name;
        std::string title;
        SpellBook spellbook;
    public:
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();
        void setTitle(const std::string &title);
        const std::string& getName() const;
        const std::string& getTitle() const;
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(const std::string& spell);
        void launchSpell(const std::string& spell, ATarget& target);
};

#endif