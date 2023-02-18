#include "Player.h"

Player::Player(std::string name, int health, int damage)
{

}
Player::Player()
{
    
}

Player::~Player()
{

}
void Player::attack(int attackPower)
{
    std::cout<<"Player attacks with attack power "<<attackPower<<std::endl;
}
/*void checkInventory(std::vector<Item*> Inventory)
{
    std::cout<<"You have chosen the Armour"<<std::endl;
}*/