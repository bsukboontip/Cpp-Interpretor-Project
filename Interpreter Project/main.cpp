#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <vector>
#include <string.h>
#include "MemoryObject.h"
#include "Value.h"
#include "ByteCode.h"
#include "Char.h"
#include "Short.h"
#include "Int.h"
#include "Float.h"
using namespace std;

int main(void) {

	FILE *inputF = fopen("interpreter_input.smp", "rb");
	fseek(inputF, 0, SEEK_END);
	long inputSize = ftell(inputF);
	rewind(inputF);

	unsigned char* memory = (unsigned char*) malloc(sizeof(unsigned char) * inputSize);
	if (memory == NULL) {
		fputs("memory error", stderr);
		exit(1);
	}

	long result = fread(memory, 1, inputSize, inputF);
	if (result != inputSize) {
		fputs("reading error", stderr);
		exit(2);
	}

	// cout << result << endl;
	// for (i = 0; i < inputSize; i++){
	// 	cout << memory[i] << endl;
	// }

	int i;
	int pc = 0;
	int sp = -1;
	int fpsp = -1;
	vector<Values>rstack;
	stack <int> fpstack;

	MemoryObject* theOne[inputSize];

	for (pc = 0; pc < inputSize; pc++) {
		if (memory[pc] == 68) {
			theOne[pc] = new ByteCode();
			theOne[pc]->c = memory[pc];
			theOne[++pc] = new Char();
		}
		else if (memory[pc] == 69) {
			theOne[pc] = new ByteCode();
			theOne[++pc] = new Short();

			short shortBytes = (short)((unsigned char)(memory[pc] << 8) |
										(unsigned char)(memory[pc + 1]));

			theOne[pc]->s = shortBytes;
			theOne[++pc] = new Short(true);
		}
		else if (memory[pc] == 70) {
			// cout << pc << endl;
			theOne[pc] = new ByteCode();
			theOne[++pc] = new Int();

			// for (i = pc; i < pc + 4; i++) {
			// 	cout << (int)memory[i] << endl;
			// }

			int integer = (int)((unsigned char)(memory[pc]) << 24 |
								(unsigned char)(memory[pc + 1] << 16) |
								(unsigned char)(memory[pc + 2] << 8) |
								(unsigned char)(memory[pc + 3]));
	
			// cout << integer << endl;
			
			theOne[pc]->i = integer;
			theOne[++pc] = new Int(true);
			theOne[++pc] = new Int(true);
			theOne[++pc] = new Int(true);
		}
		else if (memory[pc] == 71) {
			theOne[pc] = new ByteCode();
			theOne[++pc] = new Float();

			float floatByte = (float)((unsigned char)(memory[pc]) << 24 |
								(unsigned char)(memory[pc + 1] << 16) |
								(unsigned char)(memory[pc + 2] << 8) |
								(unsigned char)(memory[pc + 3]));

			theOne[pc]->f = floatByte;
			theOne[++pc] = new Float(true);
			theOne[++pc] = new Float(true);
			theOne[++pc] = new Float(true);
		}
	}


	// pc = theOne->getByteCode(pc)->execute(pc);

	fclose(inputF);
	free(memory);

	return 0;
}
