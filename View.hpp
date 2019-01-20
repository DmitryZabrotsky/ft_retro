//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef VIEW_HPP
#define VIEW_HPP
// #include "Model.hpp"
#include "Map.hpp"


#include <ncurses.h>
#include <iostream>

class Model;

class View {

private:
	Model *_model;
	WINDOW *_win;
	int x_wmax;
	int y_wmax;
	time_t _start;

	void		draw_panel();
	//Model();

public:
	View(Model *model);
	View(View const &obj);
	~View();
	View();
	View &operator=(View const &obj);

	void 		printmap(Map const &obj);
	int 		get_x_wmax();
	int 		get_y_wmax();

	WINDOW * getWin() const;

	void		gameover();

	void victory();
};


#endif
