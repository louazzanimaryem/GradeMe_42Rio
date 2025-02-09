#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target)
        this->targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(const std::string &target)
{
    for (size_t i = 0; i < targets.size(); i++)
    {
        if (targets[i]->getType() == target){
            delete targets[i];
            targets.erase(targets.begin() + i);
            return ;
        }
    }
    return ;
}
ATarget* TargetGenerator::createTarget(const std::string &target)
{
    for (size_t i = 0; i < targets.size(); i++)
    {
        if (targets[i]->getType() == target){
            return (targets[i]->clone());
        }
    }
    return NULL;
}