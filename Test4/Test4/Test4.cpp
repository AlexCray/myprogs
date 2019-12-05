#include <iostream>
#include <string>

enum class MonsterType
{
    OGRE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL,
};

struct Monster
{
    MonsterType type;
    std::string name;
    int hP;
};

std::string getMonsterTypeString(Monster monster)
{
    switch (monster.type)
    {
        case MonsterType::OGRE:
            return "ogre";
        case MonsterType::GOBLIN:
            return "goblin";
        case MonsterType::SKELETON:
            return "skeleton";
        case MonsterType::ORC:
            return "orc";
        case MonsterType::TROLL:
            return "troll";
        default:
            return "unknown";
    }
}

void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterTypeString(monster) << " is named " <<
        monster.name << " and has " << monster.hP << " HP.\n";
}

int main()
{
    Monster monster1{ MonsterType::GOBLIN, "John", 170 };
    Monster monster2{ MonsterType::ORC, "James", 35 };

    printMonster(monster1);
    printMonster(monster2);

    return 0;
}