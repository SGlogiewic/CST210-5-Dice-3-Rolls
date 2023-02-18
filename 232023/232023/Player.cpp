#include "Player.h"
#include <iostream>
using namespace std;
Player::Player() {
	total = 0;
	showTotal = 0;
}
//player rolls the dice
int Player::roll() {
	int check = 0;
	for (int i = 0; i < 2; i++) {
		total += bones[i].roll();
		cout << " " << bones[i].value();
		check += bones[i].value();
	}
	cout << endl << 
		" dice total: " << check << endl;
	if (check == 11) {
		cout << " you lose!: " << endl;
		return 0;
	}
	if (total >= 100) {
		cout << " Winner " << endl;
		return 0;
	}
	return total;
}
void Player::rollAgain() {
	string again;
	cout << "You have " << showTotal << " Roll another y / n ";
	cin >> again;
	if (again == "y") {
		getTotal();
	}
	else {
		cout << "Good Bye" << endl;
	}
}
int Player::getTotal() {
	showTotal = roll();
	rollAgain();
	return showTotal;
}