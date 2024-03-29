#include "Misc.h"
#include "Warior.h"
#include "Wizard.h"
#include "Rogue.h"


void IntroText()
{
    std::cout<<" Welcome to the world of monsters!\n";
}


bool IntroScene()
{
    char start_game;
    bool start=false;
    std::cout<<"Do you want to enter? type (y/n)\n";
    std::cin>>start_game;
    if(start_game=='y')
    start=true;
    else if (start_game=='n')
    {
        start=false;
        std::cout<<"Bye Bye!\n"; 
    }
    

    //std::cout<<"press any key to continue\n";
    //std::cin.get();
    system("cls");//-clear screen

    return start;
}


Player* setupPlayer()

{
    std::string player_name, player_type;
    int choose;
    std::cout<<"What is yout name?\n";    
    std::cin>>player_name;
    
    std::cout<<"Choose player type: \n";
    std::cout<<"Warrior = 1 \n";
    std::cout<<"Wizard = 2 \n";
    std::cout<<"Rogue = 3 \n";

    std::cin>>choose;
    switch (choose)
    {
    case 1:
    player_type="Warrior";
    break;
    case 2:
     player_type="Wizard";
    break;
    case 3:
     player_type="Rogue";
    
    default:
        system("cls");//clear screen
        std::cout<<"You must type 1, 2, or 3 \n";
        break;
    }
    std::cout<<"press any key to continue\n";
    std::cin.get();
    system("cls");//-clear screen
    

    std::cout<<"Hello "<< player_type<<"-"<<player_name<<std::endl;

    std::cout<<"press any key to continue\n";
    std::cin.get();
    system("cls");//-clear screen

    if(player_type == "Wizard")
    {
        Player* player = new Wizard(player_name);
        return player;
    }
    else if(player_type == "Warior")
    {
        Player* player = new Warior(player_name);
        return player;
    }
    else if (player_type=="Rogue")
    {
        Player* player = new Rogue(player_name);
        return player;
    }
}

std::string roadChosen;

void CrossRoads()
{
    int chooseRoad;
    
    std::cout<<"You're walking on a road and arrive at a crossroads. Where do you want to go? \n";
    std::cout<<"1.To the village"<<std::endl;
    std::cout<<"2.To the forest"<<std::endl;
    std::cout<<"3.To the caves"<<std::endl;
    std::cin>>chooseRoad;
    switch (chooseRoad)
    {
        case 1:
        roadChosen="Village";
        break;
        case 2:
        roadChosen="Forest";
        break;
        case 3:
        roadChosen="Cave";
        default:
        std::cout<<"You must type 1, 2, or 3 \n";
        break;
    }
    std::cout<<"You chose the "<<roadChosen<<std::endl;
    std::cout<<"press any key to continue\n";
    system("cls");
    
}

bool chestOpen()
{

    int chestAnswerValue;
    bool validAnswer = false, openChest;
    std::cout << "You are heading to the " << roadChosen << ". \n";
    while(validAnswer==false)
    { 
        std::cout << "On the road, you find a chest. Do you open it?" << std::endl
                    << "1. Yes" << std::endl 
                    << "2. No" << std::endl;
        std::cin>>chestAnswerValue;
        switch (chestAnswerValue)
        {
            case 1: 
            {
                validAnswer=true;
                openChest = true;
                break;
            }
            case 2: 
            {
                validAnswer=true;
                openChest = false;
                break;
            }
        }
        system("cls");
        if(validAnswer==false)
        {
            std::cout<<"Wrong input. Please pick a valid option." << std::endl;
        }
    }
    return openChest;
    }



Enemy* generateRandomEnemy()
{
    EnemyType randomEnemyType = (EnemyType) (rand() % 3);
    if(randomEnemyType == EnemyType::Orc)
    {
        Enemy* enemy = new Orc();
        std::cout << "Orc was generated \n";
        return enemy;
    }
    else if (randomEnemyType == EnemyType::Goblin)
    {
        Enemy* enemy = new Goblin();
        std::cout << "Goblin was generated \n";
        return enemy;
    }
    else 
    {
        Enemy* enemy = new Troll();
        std::cout << "Troll was generated \n";
        return enemy;
    }
}

bool battleScene(Player* player, Enemy* enemy)
{
        do 
        {
            enemy->setHP( enemy->getHP() - player->attack() );
            if (enemy->getHP() <= 0)
            {
                return true;
            }
            player->setHealth( player->getHealth() - (enemy->getDamage()) );
            if(player->getHealth() <= 0)
            {
                return false;
            }
        }
        while ( (player->getHealth() > 0) && (enemy->getHP() > 0) );
}
   









