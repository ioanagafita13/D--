#ifndef WARIOR_H
#define WARIOR_H

#pragma once
#include "Player.h"
#include<iostream>

class Warior: public Player
{
public:
    Warior(std::string name);
    Warior();
    ~Warior();


    void attack();

    void setName(std::string name);
    std::string getName()
    {
        return warior_name;
    }

protected:
    
private:
    std::string warior_name;
    int warior_health;
    int damage;

};

#endif