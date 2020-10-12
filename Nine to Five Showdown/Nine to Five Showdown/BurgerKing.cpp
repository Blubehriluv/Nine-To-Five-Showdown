#include "BurgerKing.h"
#include "Character.h"
#include <iostream>

BurgerKing::BurgerKing(std::string givenName)
{
	std::cout << "Pick a fight with me? HAH, have it your way." << std::endl;
	Name = givenName;
	std::cout << "For it is I, " << Name << ", the almighty Burger King!" << std::endl;
}

void BurgerKing::BuildBurger()
{
	std::cout << "The patties are fresh and these burgers are complete!" << std::endl;
}

void BurgerKing::Help()
{
	std::cout << "Burger King can build tasty burgers to take out the competition!" << std::endl;
}

int BurgerKing::ServeFood()
{
	return 25;
}

void BurgerKing::Hurt()
{
	std::cout << "Oh no!  His better ingredients are taking my glorious customers!" << std::endl;
}