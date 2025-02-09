#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) {
    this->name = name;
    this->title = title;
    std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
    std::cout << this->getName() << ": My job here is done!" << std::endl;
}
void Warlock::setTitle(const std::string& title) { this->title = title; }
const std::string& Warlock::getName() const { return this->name; }
const std::string& Warlock::getTitle() const { return this->title; }
void Warlock::introduce() const{
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
} 

void Warlock::learnSpell(ASpell* spell) {
    if (spell)
        spells.push_back(spell->clone());
}

void Warlock::forgetSpell(const std::string& spell) {
    for (size_t i = 0; i < spells.size(); i++)
    {
        if (spells[i]->getName() == spell){
            delete spells[i];
            spells.erase(spells.begin() + i);
            return ;
        }
    }
    return ;
}
void Warlock::launchSpell(const std::string& spell, ATarget& target)  {
     for (size_t i = 0; i < spells.size(); i++)
    {
        if (spells[i]->getName() == spell){
           spells[i]->launch(target);
           return ;
        }
    }
    return ;
}