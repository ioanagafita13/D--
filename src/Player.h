#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "Item.h"

enum class PlayerType
{
    Wizard,
    Warior,
    Rogue
};
class Player
{
public:
    PlayerType PlayerType;
    Player(std::string name, int health, int damage);
    Player();
    virtual ~Player();
    int attack(); 
    void CheckInventory();
    void CreateChestItem();
    int getItemsAttackPower();

    void setName(std::string name);
        std::string getName()
        {
            return player_name;
        }
       void setHealth(int health)
        {
        this->player_health = health;
        }
        int getHealth()
        {
            return this->player_health;
        }
        void setDamage(int damage)
        {
        this->damage = damage;
        }
        int getDamage()
        {
        return this->damage;
        }

    
protected:

        


private:
    int player_health;
    int damage;
    std::string player_name;
    std::vector<Item*> inventory;
};

#endif