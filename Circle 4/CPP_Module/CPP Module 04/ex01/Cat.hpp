#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain*  brain;
public:
    Cat(void);
    Cat(const Cat& cat);
    Cat& operator=(const Cat& cat);
    ~Cat(void);

    void    makeSound(void) const;
    Brain&  getBrain(void);
};

#endif