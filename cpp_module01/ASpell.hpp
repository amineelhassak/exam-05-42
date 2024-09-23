#pragma once
#include <iostream>

#include "ATarget.hpp"
class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell(const std::string &n,const std::string & e);
        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell *clone() const = 0;
        virtual ~ASpell();
        void launch(const ATarget &atarget) const;
};