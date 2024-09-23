#pragma once
#include <iostream>
#include <map>
#include <iterator>
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map<std::string,ASpell *> maps;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* aspl);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);
};