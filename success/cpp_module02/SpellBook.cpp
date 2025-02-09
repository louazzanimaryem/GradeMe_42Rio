#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell){
    if (spell)
        spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(const std::string &spell){
    for (size_t i = 0; i < spells.size(); i++)
    {
        if (spells[i]->getName() == spell)
        {
            delete spells[i];
            spells.erase(spells.begin() + i);
            return ;
        }
    }
    return ;
}
ASpell* SpellBook::createSpell(const std::string &newSpell){
for (size_t i = 0; i < spells.size(); i++)
    {
        if (spells[i]->getName() == newSpell)
        {
            return (spells[i]->clone());
        }
    }
    return NULL;
}