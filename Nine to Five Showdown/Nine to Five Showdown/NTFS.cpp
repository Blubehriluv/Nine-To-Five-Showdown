#include "GameStructure.h"
#include "GameDriver.h"
#include "PapaJohn.h"
#include "BurgerKing.h"
#include "Character.h"

int main()
{
	//Begins the application
	Character manager;
	GameDriver driver;
	driver.DisplayIntro();

	driver.Speak("Our first contender, the one and only, Burger King!");

	//creating a king
	BurgerKing bk_character("Jane");
	bk_character.SetHealth(350);
	bk_character.DisplayCharacterStats();
	bk_character.Talk("Try not to make a fool of yourself... Oh, wait-");
	bk_character.Help();

	driver.Speak("Next up in the ring, is the infamous Papa John!");

	//creating a pop
	PapaJohn pj_character("John");
	//pj_character.Name = "Stinky";
	pj_character.SetHealth(200);
	pj_character.DisplayCharacterStats();
	pj_character.Talk("Your skill resembles your grease, unchanged and garbage.");
	pj_character.Help();

	driver.DisplayCharacterStats();

	bk_character.BuildBurger();
	pj_character.Hurt();
	bk_character.BuildBurger();
	pj_character.Hurt();
	pj_character.MakePizza();
	bk_character.Hurt();
	bk_character.BuildBurger();
	pj_character.Hurt();
	pj_character.MakePizza();
	bk_character.Hurt();
	bk_character.BuildBurger();
	pj_character.Hurt();

	pj_character.SetHealth(0);

	driver.Speak("Would you like to play again!?!  Y/N to continue.");

	return 0;
}