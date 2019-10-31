#include "Char.h"

Char::Char() {
	error = false;
	type = 'c';
}

Char::Char(bool x) {
	error = x;
}

Char::~Char() {}

char Char::getChar() {
	return c;
}

short Char::getShort() {
	error = true;
	return 0;
}

int Char::getInt() {
	error = true;
	return 0;
}

float Char::getFloat() {
	error = true;
	return 0;
}

int Char::execute(vector<StackValues*> &rstack, vector<int> &fpstack, int &sp, int &fpsp, int pc, int &flag) {
	error = true;
	return 0;
}