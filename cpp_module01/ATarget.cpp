#include "ATarget.hpp"

ATarget::ATarget(const std::string &t):type(t)
{

}

const std::string &ATarget::getType() const
{
    return (type);
}

ATarget::~ATarget()
{

}

void ATarget::getHitBySpell(const ASpell &aspl) const
{
    std::cout << this->type << " has been " << aspl.getEffects() << "!\n";
}