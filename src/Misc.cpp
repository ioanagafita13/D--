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
        std::cout<<"Bye Bye!\n"; //nu imi afiseaza?? trece direct la clear screen! de rezolvat!
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




