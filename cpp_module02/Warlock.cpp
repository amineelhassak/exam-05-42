#include "Warlock.hpp"

const std::string &Warlock::getName() const
{
    return (name);
}

const std::string &Warlock::getTitle() const
{
    return (title);
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

Warlock::Warlock(const std::string &name,const std::string &title):name(name),title(title)
{
    std::cout << this->name <<": This looks like another boring day.\n";
}

void Warlock::introduce() const
{
    std::cout <<this->name << ": I am " << this->name<<", "<< this->title <<"!\n";
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}

void Warlock::learnSpell(ASpell *aspl)
{
    maps.learnSpell(aspl);
}

void Warlock::forgetSpell(std::string name)
{
    maps.forgetSpell(name);
}

void Warlock::launchSpell(std::string name,const ATarget &atarget)
{
    ASpell *n = maps.createSpell(name);
    if (n)
        n->launch(atarget);
}