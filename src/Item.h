#ifndef ITEM_H
#define ITEM_H

#pragma once
#include<string>
#include<iostream>

class Item
{
public:
    Item();
    Item(std::string ItemType, std::string ItemName, int AttackPower, int MagicPower, int Defence);
    ~Item();

    int getAttackPower()
    {
        return m_AttackPower;
    }
    int getDefence()
    {
        return m_Defence;
    }
    int getMagicPower()
    {
        return m_MagicPower;
    }
    std::string getItemType()
    {
        return m_ItemType;
    }
    std::string getItemName()
    {
        return m_ItemName;
    }

    
private:
    int m_AttackPower;
    int m_MagicPower;
    int m_Defence;
    std::string m_ItemType;
    std::string m_ItemName;

};

#endif