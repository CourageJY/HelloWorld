# HelloWorld
It's my first project ! So, let me try on it to see the new world. 
//Here are my codes:
#include<iostream>
#include<cstdlib>
#include "EndScene.h"
#include "ui/CocosGUI.h"
#include "FightWorldScene.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;
Scene* FightWorld::createScene()
{
    log("HelloWorld::createScene()");
    return FightWorld::create();//±ÿ–Î“¿¿µÕº≤„£ø
    //auto layer = Layer::create();
}