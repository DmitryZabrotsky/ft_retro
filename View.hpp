//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef VIEW_HPP
#define VIEW_HPP
#include "Map.hpp"

#include <ncurses.h>
#include <iostream>

class View {

private:
	WINDOW *_win;
	int x_wmax;
	int y_wmax;

public:
	View();
	View(View const &obj);
	~View();
	View &operator=(View const &obj);

	void 		printmap(map sconst &obj);
	int 		get_x_wmax();
	int 		get_y_wmax();

};


#endif
