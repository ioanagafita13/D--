#include "Item.h"

Item::Item()
{

}
Item::Item(std::string ItemName, std::string ItemType, int AttackPower, int MagicPower, int Defence)
{
    m_ItemName = ItemName;
    m_ItemType = ItemType;
    m_AttackPower = AttackPower;
    m_MagicPower = MagicPower;
    m_Defence = Defence;
}

Item::~Item()
{

}
