#include <iostream>
#include <sstream>

#include "Player.h"

// Conclusion: The contsructor uses a piece of memory to create an object, the destructor releases the memory in use,
//			   Meaning that there is nothing stored afterwards, Everything is momentary until the destructor gets called.
//			   But that doesn't mean we cant leave changes made by the const/dest pair in the code afterwards.


int main() {
	{
		// Constructor, Destructor
		// In one line: Initializes us an object from the class, de-initializes it when it steps out of the scope.

		Player player;
		/*
		player.speak();
		player.ateYet();
		player.eat();
		player.ateYet();
		player.speak();
		*/
	

		// Testing how to solve name input for street-game
		/* std::string playerName = player.nameInput(); */

		// Setter, Getter
		// In one line: Used to set and get private variables you wouldn't be able to
		// Considered a bad practice to use, but they are still worthwhile to use sometimes.
		/* std::cout << "Current HP: " << player.getHP() << std::endl;
		player.setHP(5);
		std::cout << "Current HP: " << player.getHP() << std::endl; */

		// REMINDER: Using a while method with player methods,
		// I can manipulate when the destructor gets called.
		// Destructor gets called when the HP gets to


		// Stringstream
		// In one line: Used to print out different types of variables together.
		// Haven't decided on the naming convention yet, but I quite like the way I use it down below,
		std::string ss_Name = "Jason";
		int ss_HP = 10;

		std::stringstream ss;

		ss << "Player name: ";
		ss << ss_Name;
		ss << "; Player HP: ";
		ss << ss_HP;

		std::cout << ss.str();
	}
}