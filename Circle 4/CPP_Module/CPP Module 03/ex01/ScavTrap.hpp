#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& scavTrap);
    ScavTrap&   operator=(const ScavTrap& scavTrap);
    ~ScavTrap(void);

    void    attack(const std::string& target);
    void    guardGate(void);
};

#endif