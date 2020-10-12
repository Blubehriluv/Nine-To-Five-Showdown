
#pragma once
#include "Character.h"
#include <string>
class PapaJohn :
	public Character
{
public:
	PapaJohn(std::string givenName);
	void MakePizza();
	int ServeFood() override;
	void Help() override;
	void Hurt() override;
private:

};