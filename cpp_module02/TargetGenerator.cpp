#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType(ATarget * atarget)
{
    maps[atarget->getType()] = atarget;
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
    std::map<std::string,ATarget *>::iterator it = maps.find(name);
    if (it != maps.end())
        maps.erase(it);
}

ATarget* TargetGenerator::createTarget(std::string const &name)
{
    std::map<std::string ,ATarget *>::iterator it = maps.find(name);
    if (it != maps.end())
        return (it->second->clone());
    return (NULL);
}
