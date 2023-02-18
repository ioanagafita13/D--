#ifndef ITEM_H
#define ITEM_H

#pragma once
#include<string>
#include<iostream>

class Item
{
public:
    Item();
    ~Item();
    
private:
    int AttackPower;
    int MagicPower;
    int Defense;
    std::string ItemType;

};

#endif