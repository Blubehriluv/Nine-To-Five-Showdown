#pragma once
#include "Character.h"
class BurgerKing :
	public Character
{
public:
	BurgerKing(std::string givenName);
	void BuildBurger();
	int ServeFood() override;
	void Help() override;
	void Hurt() override;

private:

};