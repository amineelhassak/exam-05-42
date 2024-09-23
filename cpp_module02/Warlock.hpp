#pragma once
#include <iostream>
#include "ATarget.hpp"
#include  "ASpell.hpp"
#include <iterator>
#include <map>
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        SpellBook maps;
    public:
        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(const std::string &title);
        Warlock(const std::string &name,const std::string &title);
        void introduce() const;
        ~Warlock();
        void learnSpell(ASpell *aspl);
        void forgetSpell(std::string name);
        void launchSpell(std::string name,const ATarget &atarget);
};