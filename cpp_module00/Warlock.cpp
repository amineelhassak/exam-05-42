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

// int main()
// {
//   Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);
// }