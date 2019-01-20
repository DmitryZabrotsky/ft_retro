//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "View.hpp"

View::View() {

	initscr(); 
	cbreak(); 
	noecho(); 
	curs_set(0);

	keypad(stdscr, TRUE); 
	nodelay(stdscr, TRUE); 
	scrollok(stdscr, FALSE);


	getmaxyx(stdscr, this->y_wmax, this->x_wmax);

	
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_WHITE, COLOR_BLACK);
	init_pair(6, COLOR_RED, COLOR_RED);
	init_pair(7, COLOR_CYAN, COLOR_BLACK);
	init_pair(11, COLOR_BLACK, COLOR_GREEN);
	init_pair(12, COLOR_CYAN, COLOR_CYAN);
	init_pair(22, COLOR_BLACK, COLOR_BLUE);
	init_pair(33, COLOR_BLACK, COLOR_RED);
	init_pair(44, COLOR_BLACK, COLOR_CYAN);
	init_pair(55, COLOR_BLACK, COLOR_WHITE);
	getmaxyx(stdscr, this->y_wmax, this->x_wmax);


	WINDOW *win = newwin(this->y_wmax - 1, this->x_wmax - 1, 0, 0);
	nodelay(stdscr, FALSE);
	init_pair(133, COLOR_RED, COLOR_BLUE);	
	wattron(win, COLOR_PAIR(133));
//	wborder(win, 42, 42, 42, 42, 42, 42, 42, 42);
	wrefresh(win);
}

View::View(View const &obj) { *this = obj; }

View::~View() { endwin(); }

View &View::operator=(View const &obj) {
	_win = obj._win;
	x_wmax = obj.x_wmax;
	y_wmax = obj.y_wmax;
	return (*this);
} 


void 	View::printmap(Map const &map)
{
//	int x1 = 0;
//	int y1 = 0;
//	while (y1 < y_wmax)
//	{
//		x1 = 0;
//		while(x1 < x_wmax)
//		{
////			wattron(_win, map.getColor(x1, y1));
////			mvwprintw(_win, y1, x1, "%c", map.getSymbol(x1, y1));
//			x1++;
//		}
//		y1++;
//	}
//	wrefresh(_win);

}

int View::get_x_wmax() {return (this->x_wmax);}
int View::get_y_wmax() {return (this->y_wmax);}
