//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "View.hpp"
 #include <unistd.h>
View::View() {

	initscr(); 
	cbreak(); 
	noecho(); 
	curs_set(0);
	start_color();
	keypad(stdscr, TRUE); 
	nodelay(stdscr, TRUE); 
	scrollok(stdscr, FALSE);


	getmaxyx(stdscr, this->y_wmax, this->x_wmax);

	
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_CYAN, COLOR_BLACK);
	init_pair(4, COLOR_RED, COLOR_BLACK);
	init_pair(5, COLOR_WHITE, COLOR_BLACK);
	init_pair(6, COLOR_RED, COLOR_RED);
	init_pair(7, COLOR_CYAN, COLOR_BLACK);
	init_pair(11, COLOR_BLACK, COLOR_GREEN);
	init_pair(12, COLOR_CYAN, COLOR_CYAN);
	init_pair(22, COLOR_BLACK, COLOR_BLUE);
	init_pair(33, COLOR_BLACK, COLOR_RED);
	init_pair(44, COLOR_BLACK, COLOR_CYAN);
	init_pair(55, COLOR_BLACK, COLOR_WHITE);

	init_pair(133, COLOR_CYAN, COLOR_BLACK);	

	getmaxyx(stdscr, this->y_wmax, this->x_wmax);



	_win = newwin(this->y_wmax - 1, this->x_wmax, 0, 0);
	nodelay(_win, true);
//	raw();
	keypad(_win, true);

	wattron(_win, COLOR_PAIR(133));
	//wborder(_win, 42, 42, 42, 42, 42, 42, 42, 42);
	wrefresh(_win);
}

void	View::draw_panel()
{
	wattron(_win, COLOR_PAIR(133));

	mvwprintw(_win, 0, this->x_wmax - 17, "~~~~~~Score~~~~~~");
	mvwvline(_win, 1, this->x_wmax - 17, '*', 2);
	mvwvline(_win, 1, this->x_wmax - 1, '*', 2);

	mvwprintw(_win, 3, this->x_wmax - 17, "~~~~~~~~~~~~~~~~~");

}

View::View(View const &obj) { *this = obj; }

View::~View() { delwin(_win); endwin(); }

View &View::operator=(View const &obj) {
	_win = obj._win;
	x_wmax = obj.x_wmax;
	y_wmax = obj.y_wmax;
	return (*this);
} 


void 	View::printmap(Map const &map)
{
	int x1 = 0;
	int y1 = 0;





	werase(_win);
	while (y1 < map.getY())
	{
		x1 = 0;
		while(x1 < map.getX())
		{
//			usleep((useconds_t)((int)1000000 / 100000));

			wattron(_win, COLOR_PAIR(map.getColor(x1, y1)));
			char c = map.getSymbol(x1, y1);
			if (c != ' ')
				mvwprintw(_win, y1, x1, "%c", c);
			x1++;
		}
		y1++;
	}
	draw_panel();
	wrefresh(_win);

}

int View::get_x_wmax() {return (this->x_wmax);}
int View::get_y_wmax() {return (this->y_wmax);}

WINDOW *View::getWin() const {
	return _win;
}
