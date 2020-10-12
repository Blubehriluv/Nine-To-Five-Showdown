#include "PapaJohn.h"
#include "Character.h"
#include <iostream>

PapaJohn::PapaJohn(std::string givenName)
{
	std::cout << "You don't have better ingredients, and you sure as hell don't have better pizza!" << std::endl;
	Name = givenName;
	std::cout << "Nice to meet ya, I'm " << Name << ", but call me Papa John." << std::endl;
}

void PapaJohn::MakePizza()
{
	std::cout << "Spinning dough and folding boxes has never made a pizza this delicious!" << std::endl;
}

void PapaJohn::Help()
{
	std::cout << "Papa John can earn lots of money by making pizzas!" << std::endl;
}

int PapaJohn::ServeFood()
{
	return 25;
}

void PapaJohn::Hurt()
{
	std::cout << "Crap, I lose profits when people have it their way!" << std::endl;
}