#include "SpellBook.hpp"
#include <iterator>
SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{

}

void SpellBook::learnSpell(ASpell* aspl)
{
    maps[aspl->getName()] = aspl;
}

void SpellBook::forgetSpell(std::string const &name)
{
    std::map<std::string,ASpell *>::iterator it = maps.find(name);
    if (it != maps.end())
        maps.erase(it);
}

ASpell* SpellBook::createSpell(std::string const &name)
{
    std::map<std::string ,ASpell *>::iterator it = maps.find(name);
    if (it != maps.end())
        return (it->second->clone());
    return (NULL);
}
