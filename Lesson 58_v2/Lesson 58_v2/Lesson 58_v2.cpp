#include <iostream>

enum class MonsterType
{
    OGRE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL,
};

int main()
{
    MonsterType monster1{ MonsterType::OGRE };

    return 0;
}