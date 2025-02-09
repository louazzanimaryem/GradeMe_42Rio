#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <vector>
#include <string>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator {
    private:
        std::vector<ATarget*> targets;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(const std::string &target);
        ATarget* createTarget(const std::string &target);
};

#endif