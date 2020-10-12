#include "GameDriver.h"
#include <iostream>
#include <stdlib.h>
#include "Character.h"
#include "BurgerKing.h"

void GameDriver::DisplayIntro()
{
	std::cout << std::endl;
	std::cout << "Welcome to the Nine to Five Showdown!" << std::endl;
	std::cout << std::endl;
	std::cout << "Fight in this head to head battle against your opponents" << std::endl;
	std::cout << "as Burger King, or Papa John, to steal as much compeition" << std::endl;
	std::cout << "as you can and WOW the customers! Let's skyrocket some profit!" << std::endl;
	std::cout << "Press a button to continue." << std::endl;
	std::cout << std::endl;
}

void GameDriver::DisplayCharacterStats()
{

	std::cout << std::endl;
	std::cout << "Display Character Stats!" << std::endl;
	std::cout << "\t\tPapa John" << std::endl;
	std::cout << "Customers:\t200" << std::endl;
	std::cout << "Advertising Value:\t75" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\t\tBurger King" << std::endl;
	std::cout << "Customers:\t350" << std::endl;
	std::cout << "Advertising Value:\t25" << std::endl;
	std::cout << std::endl;
}

int GameDriver::RandomRoll()
{
	int randomNum;
	randomNum = rand() % 100 + 1;

	return randomNum;
}

void GameDriver::FightEachOther()
{

}

void GameDriver::Speak(std::string speech)
{
	std::cout << std::endl;
	std::cout << speech << std::endl;
	std::cout << std::endl;
}