#include <assert.h> 
#include "TestSuite.h"
#include <iostream>
using namespace std;

int main() {

	char letter = 'r';
	Tetromino tetro = Tetromino();

	while (letter != 'x') {
		cout << "Enter 'r' to rotate or a letter (o, i, s, z, l, j, t) to change the piece. 'x' to exit" << endl;
		cin >> letter;
		if (letter == 'r') {
			tetro.rotateCW();
			tetro.printToConsole();
		}
		else if (letter == 'o') {
			tetro.setShape(TetShape::SHAPE_O);
			tetro.printToConsole();
		}
		else if (letter == 'i') {
			tetro.setShape(TetShape::SHAPE_I);
			tetro.printToConsole();
		}
		else if (letter == 's') {
			tetro.setShape(TetShape::SHAPE_S);
			tetro.printToConsole();
		}
		else if (letter == 'z') {
			tetro.setShape(TetShape::SHAPE_Z);
			tetro.printToConsole();
		}
		else if (letter == 'l') {
			tetro.setShape(TetShape::SHAPE_L);
			tetro.printToConsole();
		}
		else if (letter == 'j') {
			tetro.setShape(TetShape::SHAPE_J);
			tetro.printToConsole();
		}
		else if (letter == 't') {
			tetro.setShape(TetShape::SHAPE_T);
			tetro.printToConsole();
		}
		else if (letter == 'x') {
			continue;
		}
		else {
			cout << "Invalid letter. Please try again." << endl;
		}

	}
}