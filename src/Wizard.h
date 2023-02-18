#ifndef WIZARD_H
#define WIZARD_H

#pragma once
#include "Player.h"

class Wizard : public Player
{
public:
    Wizard(std::string name);
    Wizard();
    ~Wizard();

    void attack();

    void setName(std::string name);
    std::string getName()
    {
        return wizard_name;
    }

private:
    std::string wizard_name;
    int wizard_health;
    int damage;
};

#endif