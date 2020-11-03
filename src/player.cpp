#include <iostream>

#include "Player.h"
//#include "../util.h"

// Constructor, Destructor

Player::Player()
{
	// Contstructor can be used to give default values to entities,
	// But since you want to initialize, might as well initialize with a value you can use,
	// In order so you dont have to set anything here?
	HP = 20;
}

Player::~Player()
{
}

void Player::speak()
{
	if (happy == true)
	{
		std::cout << "Im happy because I ate!" << std::endl;
	}
	else if (happy == false)
	{
		std::cout << "Im hungry :-(!" << std::endl;
	}
	else
	{
		std::cout << "Something went wrong with speak()!" << std::endl;
	}
}

void Player::eat()
{
	std::cout << "*NOM*... *NOM* Consuming the bread... *NOM*" << std::endl;
	atefood = true;
	happy = true;
}

void Player::ateYet()
{
	if (atefood == true)
	{
		std::cout << "I completely destroyed that lame piece of bread!" << std::endl;
	}
	else if (atefood == false)
	{
		std::cout << "I haven't ate anything yet :-(" << std::endl;
	}
	else
	{
		std::cout << "Something went wrong with ateYet()!" << std::endl;
	}
}

// Testing nameinput for streetgame

std::string Player::nameInput()
{
	bool pickingName = true;

	std::string newName;

	while (pickingName == true)
	{
		// clearScreen();

		std::cout << "Please enter your new name: " << std::endl;

		std::cin >> newName;

		//clearScreen();

		std::cout << "You've chosen the name: " + newName << std::endl;

		'\n';


		bool willContinue = false;

		while (willContinue == false)
		{
			std::cout << "Do you wish to continue with this name? Y/N?" << std::endl;

			std::string continueInput;

			std::cin >> continueInput;

			if (continueInput == "y" || continueInput == "Y")
			{
				std::cout << "Returning to the game with your new name!" << std::endl;
				willContinue = true;
				pickingName = false;
			}
			else if (continueInput == "n" || continueInput == "N")
			{
				break;
			}
			else
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
				// clearScreen();
			}
		}
	}
	return newName;
}

// Getter, Setter

void Player::setHP(int newHP) 
{
	HP = newHP;
}

int Player::getHP()
{
	return HP;
}

// Stringstream



