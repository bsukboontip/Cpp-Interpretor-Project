#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "MemoryObject.h"
#include "Value.h"
#include "ByteCode.h"
#include "Char.h"
#include "Short.h"
#include "Int.h"
#include "Float.h"

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

#include "Printc.h"
#include "Printf.h"
#include "Prints.h"
#include "Printi.h"

#include "Cmpe.h"
#include "Cmplt.h"
#include "Cmpgt.h"

#include "Jmp.h"
#include "Jmpc.h"
#include "Call.h"
#include "Ret.h"

#include "Pushc.h"
#include "Pushs.h"
#include "Pushi.h"
#include "Pushf.h"
#include "Pushvc.h"
#include "Pushvf.h"
#include "Pushvi.h"
#include "Pushvs.h"
#include "Popm.h"
#include "Popv.h"
#include "Popa.h"
#include "Peekc.h"
#include "Peekf.h"
#include "Peeki.h"
#include "Peeks.h"
#include "Pokec.h"
#include "Pokef.h"
#include "Pokei.h"
#include "Pokes.h"
#include "Swp.h"
#include "StackValues.h"

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

	int sp = -1;
	int fpsp = -1;
	stack <int> fpstack;
	vector<StackValues*> rstack;
	// StackValues* newStack = new StackValues();
	// rstack.push_back(newStack);
	
	int pc = 0;

	MemoryObject* theOne[inputSize];

	for (pc = 0; pc < inputSize; pc++) {
		if (memory[pc] == 132) {
			theOne[pc] = new Cmpe();
		}

		else if (memory[pc] == 136) {
			theOne[pc] = new Cmplt();
		}

		else if (memory[pc] == 140) {
			theOne[pc] = new Cmpgt();
		}

		else if (memory[pc] == 36) {
			theOne[pc] = new Jmp();
		}

		else if (memory[pc] == 40) {
			theOne[pc] = new Jmpc();
		}

		else if (memory[pc] == 44) {
			theOne[pc] = new Call();
		}

		else if (memory[pc] == 48) {
			theOne[pc] = new Ret();
		}

		else if (memory[pc] == 68) {
			theOne[pc] = new Pushc();
			theOne[pc]->c = memory[pc];
			theOne[++pc] = new Char();
		}
		else if (memory[pc] == 69) {
			theOne[pc] = new Pushs();
			theOne[++pc] = new Short();

			// short shortBytes = (short)((unsigned char)(memory[pc] << 8) |
			// 							(unsigned char)(memory[pc + 1]));

			short shortBytes;
			memcpy(&shortBytes, memory + pc * sizeof(char), sizeof(short));

			theOne[pc]->s = shortBytes;
			theOne[++pc] = new Short(true);
		}
		else if (memory[pc] == 70) {
			theOne[pc] = new Pushi();
			theOne[++pc] = new Int();

			// for (i = pc; i < pc + 4; i++) {
			// 	cout << (int)memory[i] << endl;
			// }

			// int integer = (int)((unsigned char)(memory[pc]) << 24 |
			// 					(unsigned char)(memory[pc + 1] << 16) |
			// 					(unsigned char)(memory[pc + 2] << 8) |
			// 					(unsigned char)(memory[pc + 3]));
	
			// cout << integer << endl;

			int integer;
			memcpy(&integer, memory + pc * sizeof(char), sizeof(int));
			// char test[4] = {0, 0, 0, 16};
			// memcpy(&integer1, test, sizeof(int));
			// cout << integer << endl;
			
			theOne[pc]->i = integer;
			theOne[++pc] = new Int(true);
			theOne[++pc] = new Int(true);
			theOne[++pc] = new Int(true);
		}
		else if (memory[pc] == 71) {
			theOne[pc] = new Pushf();
			theOne[++pc] = new Float();

			// float floatByte = (float)((unsigned char)(memory[pc]) << 24 |
			// 					(unsigned char)(memory[pc + 1] << 16) |
			// 					(unsigned char)(memory[pc + 2] << 8) |
			// 					(unsigned char)(memory[pc + 3]));

			float floatByte;
			memcpy(&floatByte, memory + pc * sizeof(char), sizeof(float));

			theOne[pc]->f = floatByte;
			theOne[++pc] = new Float(true);
			theOne[++pc] = new Float(true);
			theOne[++pc] = new Float(true);
		}

		else if (memory[pc] == 72) {
			theOne[pc] = new Pushvc();
		}

		else if (memory[pc] == 73) {
			theOne[pc] = new Pushvs();
		}

		else if (memory[pc] == 74) {
			theOne[pc] = new Pushvi();
		}

		else if (memory[pc] == 75) {
			theOne[pc] = new Pushvf();
		}

		else if (memory[pc] == 76) {
			theOne[pc] = new Popm();
		}

		else if (memory[pc] == 80) {
			theOne[pc] = new Popv();
		}

		else if (memory[pc] == 77) {
			theOne[pc] = new Popa();
		}

		else if (memory[pc] == 84) {
			theOne[pc] = new Peekc();
		}

		else if (memory[pc] == 85) {
			theOne[pc] = new Peeks();
		}

		else if (memory[pc] == 86) {
			theOne[pc] = new Peeki();
		}

		else if (memory[pc] == 87) {
			theOne[pc] = new Peekf();
		}

		else if (memory[pc] == 88) {
			theOne[pc] = new Pokec();
		}

		else if (memory[pc] == 89) {
			theOne[pc] = new Pokes();
		}

		else if (memory[pc] == 90) {
			theOne[pc] = new Pokei();
		}

		else if (memory[pc] == 91) {
			theOne[pc] = new Pokef();
		}

		else if (memory[pc] == 94) {
			theOne[pc] = new Swp();
		}

		else if (memory[pc] == 100) {
			theOne[pc] = new Add();
		}

		else if (memory[pc] == 104) {
			theOne[pc] = new Sub();
		}

		else if (memory[pc] == 108) {
			theOne[pc] = new Mul();
		}

		else if (memory[pc] == 112) {
			theOne[pc] = new Div();
		}

		else if (memory[pc] == 144) {
			theOne[pc] = new Printc();
		}

		else if (memory[pc] == 145) {
			theOne[pc] = new Prints();
		}

		else if (memory[pc] == 146) {
			theOne[pc] = new Printi();
		}

		else if (memory[pc] == 147) {
			theOne[pc] = new Printf();
		}
	}

	StackValues* newStack;
	pc = 0;
	while(pc != -1) {
		if (pc == 68) {
			newStack = new StackValues(theOne[pc + 1]->getChar());
			rstack.push_back(newStack);
			pc += 2;
		}
		else if (pc == 69) {
			newStack = new StackValues(theOne[pc + 1]->getShort());
			rstack.push_back(newStack);
			pc += 3;
		}
		else if (pc == 70) {
			newStack = new StackValues(theOne[pc + 1]->getInt());
			rstack.push_back(newStack);
			pc += 5;
		}
		else if (pc == 71) {
			newStack = new StackValues(theOne[pc + 1]->getFloat());
			rstack.push_back(newStack);
			pc += 5;
		}
		else {
			pc = theOne[pc]->execute(rstack, fpstack, sp, fpsp, pc);
		}
	}

	fclose(inputF);
	free(memory);

	return 0;
}