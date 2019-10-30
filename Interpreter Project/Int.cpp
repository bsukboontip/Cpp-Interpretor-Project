#include "Int.h"

Int::Int() {
	error = false;
	type = 'i';
}

Int::Int(bool x) {
	error = x;
}

Int::~Int() {}

char Int::getChar() {
	error = true;
	return 0;
}

short Int::getShort() {
	error = true;
	return 0;
}

int Int::getInt() {
	error = true;
	return i;
}

float Int::getFloat() {
	error = true;
	return 0;
}

int Int::execute(vector<StackValues*>, vector<int>, int, int, int) {
	error = true;
	return 0;
}