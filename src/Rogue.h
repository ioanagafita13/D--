#ifndef ROGUE_H
#define ROGUE_H

#pragma once
#include "Player.h"

class Rogue: public Player
{
public:
    Rogue(std::string name);
    Rogue();
    ~Rogue();

    void attack();

    void setName(std::string name);
    std::string getName()
    {
        return rogue_name;
    }

private:
    std::string rogue_name;
    int rogue_health;
    int damage;

};

#endif