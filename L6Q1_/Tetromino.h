//
//  Tetromino.h
//  L6Q1
//
//  Created by Andrew on 2019-03-04.
//  Copyright © 2019 ICS214. All rights reserved.
//

#ifndef TETROMINO_H
#define TETROMINO_H

enum class Tetcolor { RED, ORANGE, YELLOW, GREEN, BLUE_LIGHT, BLUE_DARK, PURPLE };

enum class TetShape { SHAPE_S, SHAPE_Z, SHAPE_L, SHAPE_J, SHAPE_O, SHAPE_I, SHAPE_T };

class Tetromino {

private:
	TetColor color;
	tetShape shape;

protected:
	vector<Point> blockLocs;

public:
	Tetromino()
	TetColor getColor()
	TetShape getShape()
	void setShape(TetShape shape);
	void rotateCW()
	void printToConsole()

};

#endif /* TETROMINO_H */