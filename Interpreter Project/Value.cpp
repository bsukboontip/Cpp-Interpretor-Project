#include "Value.h"

Value::Value() {
	error = false;
}

Value::Value(bool x) {
	error = x;
}

Value::~Value() {}

char Value::getChar() {
	error = true;
	return 0;
}

short Value::getShort() {
	return s;
}

int Value::getInt() {
	error = true;
	return 0;
}

float Value::getFloat() {
	error = true;
	return 0;
}

int Value::execute(vector<StackValues*> rstack, stack<int> fpstack, int sp, int fpsp, int pc) {
	error = true;
	return 0;
}