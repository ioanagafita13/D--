#include <iostream>
#include<string>
#include "Player.h"
#include "Enemy.h"
#include "Orc.h"
#include "Goblin.h"
#include "Troll.h"

void IntroText();
bool IntroScene();
Player* setupPlayer();
void CrossRoads();
bool chestOpen();
Enemy* generateRandomEnemy();
bool battleScene(Player* player, Enemy* enemy);