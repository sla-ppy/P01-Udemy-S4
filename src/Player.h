#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
private:
	bool happy = false;
	bool atefood = false;

	int HP = 10;

public:

	Player();
	~Player();

	// Constructor, Destructor
	void speak();
	void eat();
	void ateYet();

	// Nameinput testing for streetgame
	std::string nameInput();

	// Getter, Setter
	void setHP(int newHP);
	int getHP();
};

#endif
