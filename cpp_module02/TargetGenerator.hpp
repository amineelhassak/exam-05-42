#include <iostream>
#include "ATarget.hpp"
#include <iterator>
#include <map>

class TargetGenerator
{
    private:
        std::map<std::string,ATarget *> maps;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget * atarget);
        void forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);
};