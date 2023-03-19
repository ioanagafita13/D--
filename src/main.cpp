#include "Misc.h"
#include "Warior.h"
#include "Wizard.h"
#include "Rogue.h"



int main(int argc, char const *argv[])
{

        IntroText();
        IntroScene();
        Player* Player=setupPlayer(); 
        CrossRoads();
        if(chestOpen())
        {
            Player->CreateChestItem();
        }
        Player->CheckInventory(); 
        std::cout << "Your healt before the battle: " << Player->getHealth() << std::endl;
            Enemy* enemy = generateRandomEnemy();
            if(battleScene(Player, enemy) == true)
            {
                std::cout<<"You won! \n";
                std::cout<<"Your current health is: " << Player->getHealth() << std::endl;
                delete enemy;
                std::cout << "Press any key to continue..." << std::endl;
            }
            else
            {
                std::cout<<"You lost! \n";
                std::cout << "Press any key to continue..." << std::endl;
                delete enemy;
            }

            //Player->DeleteItems();
            delete Player;
        system("cls");
    




    
    return 0;
}
