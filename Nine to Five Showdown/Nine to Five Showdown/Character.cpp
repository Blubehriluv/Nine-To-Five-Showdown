#include "GameStructure.h"
#include "BurgerKing.h"
#include "PapaJohn.h"
#include "Character.h"
#include <iostream>

int Character::GetHealth()
{
	return Health;
}

void Character::DisplayCharacterStats()
{
	std::cout << "This Character currently has " << GetHealth() << " customers!" << std::endl;
}

void Character::Talk(std::string stuffToSay)
{
	std::cout << "The Character says, '" << stuffToSay << "'" << std::endl;
}

void Character::Talk(std::string stuffToSay, std::string Name)
{
	std::cout << Name << ", " << stuffToSay << "." << std::endl;
}

int Character::SetHealth(int healthSet)
{
	if (healthSet <= 0)
	{
		healthSet = 0;
		Health = healthSet;
		std::cout << Name << " has been outserved, shut the franchise down!" << std::endl;
	}
	else
	{
		Health = healthSet;
	}
	return Health;
}

int Character::ServeFood()
{
	return 10;
}

void Character::Hurt()
{
	std::cout << "Ouch, that's some fast food!" << std::endl;
}

//int Character::Attack(int )

void Character::Help()
{
	std::cout << "I am here to help." << std::endl;
}