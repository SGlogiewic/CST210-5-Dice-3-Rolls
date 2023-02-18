#include "Die.h"
Die::Die() {
	sides = 0;
}

int Die::roll() {
	sides = rand() % 6 + 1;
	return sides;
}

int Die::value() {
	return sides;
}
