#include <iostream>

enum MonsterType
{
    MONSTER_OGRE,
    MONSTER_GOBLIN,
    MONSTER_SKELETON,
    MONSTER_ORC,
    MONSTER_TROLL,
};

int main()
{
    MonsterType monster1{ MONSTER_OGRE };

    return 0;
}