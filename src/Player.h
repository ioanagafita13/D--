#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include<string>
#include<vector>
#include<iostream>
//#include "Item.h"

class Player
{
public:
    Player(std::string name, int health, int damage);
    Player();
    virtual ~Player();
    virtual void attack(int attackPower); 
    //void checkInventory(std::vector<Item*> inventory);

    
protected:

        void setName(std::string name);
        std::string getName()
        {
            return player_name;
        }


private:
    int player_health;
    int damage;
    std::string player_name;
   // std::vector<Item*> inventory; 
};

#endif