#pragma once
#include "GameStructure.h"
#include <string>


class Character :
	public GameStructure
{
public:
	std::string Name;
	int GetHealth();
	int SetHealth(int healthSet);
	//void GameStructure::Help();
	void DisplayCharacterStats();
	void Talk(std::string stuffToSay);
	void Talk(std::string stuffToSay, std::string Name);
	virtual int ServeFood();
	virtual void Hurt();
	void Help() override;

private:
	int Health;
};