#pragma once
#include <iostream>
#include "ASpell.hpp"
class ASpell;
class ATarget
{
    protected:
        std::string type;
    public:
        ATarget(const std::string &t);
        const std::string &getType() const;
        virtual ~ATarget();
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &aspl) const;
};