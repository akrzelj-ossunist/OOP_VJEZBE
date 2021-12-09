#include "Header.hpp"

Board::~Board() {
	for (int i = 0; i < row; i++)
		delete[] Frame[i];
	delete[] Frame;
	cout << "\nEnd of code!" << endl;
}

void Board::draw_char(Point p, char ch)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (j == p.x && i == p.y)
				Frame[i][j] = ch;
}

void Board::draw_line(Point p1, Point p2, char ch)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (max(p1.x, p2.x) >= j && min(p1.x, p2.x) <= j && i == max(p1.y, p2.y))
				Frame[i][j] = ch;
}

void Board::draw_up_line(Point p1, Point p2, char ch)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (i == j && j >= min(p1.x, p2.x) && i <= max(p1.y, p2.y))
				Frame[i][j] = ch;
}

void Board::display()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << Frame[i][j];
		cout << endl;
	}
}