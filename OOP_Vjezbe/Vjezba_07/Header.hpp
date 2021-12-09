#ifndef _HEADER_H
#define _HEADER_H

#include <iostream>
#include <iomanip>

using namespace std;

typedef struct Point {
public:
	double x, y;
	Point(double x1, double y1) :x(x1), y(y1) {};
}Point;

class Board {
	char** Frame;
	int row, col;
public:
	Board() = default;

	Board(int row1, int col1){
		row = row1; col = col1;
		Frame = new char* [row];
		for (int i = 0; i < row; i++)
			Frame[i] = new char[col];
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
			{
				if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
					Frame[i][j] = 'o';
				else
					Frame[i][j] = ' ';
			}
	};

	Board(Board& B) {
		col = B.col; row = B.row;
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				Frame[i][j] = B.Frame[i][j];
	}

	Board(Board&& B) {
		col = B.col; row = B.row;
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				Frame[i][j] = B.Frame[i][j];
		B.Frame = nullptr;
		B.col = 0;
		B.row = 0;
	}
	~Board();
	void draw_char(Point P, char ch);//postavlja tocku na povrsini
	void draw_up_line(Point P, Point P1, char ch);//crta okomito liniju od tocke prema dolje 
	void draw_line(Point P, Point P1, char ch);//crta liniju izmedju dvije tocke
	void display();
};

#endif // !_HEADER_H
