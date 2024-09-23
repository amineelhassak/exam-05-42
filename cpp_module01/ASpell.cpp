#include "ASpell.hpp"

ASpell::ASpell(const std::string &n,const std::string & e):name(n),effects(e)
{

}

void ASpell::launch(const ATarget &atarget) const
{
    atarget.getHitBySpell(*this);
}

const std::string &ASpell::getName() const
{
    return (name);
}

const std::string &ASpell::getEffects() const
{
    return (effects);
}

ASpell::~ASpell()
{

}