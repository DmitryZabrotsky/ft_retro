//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Control.hpp"

Control::Control() {

}

Control::Control(Control const &obj) {
	*this = obj;
}

Control::~Control() {
}

Control &Control::operator=(Control const &obj) {
	_model = obj._model;
	_view = obj._view;
	return *this;
}

Control::Control(Model *model, View *view): _model(model), _view(view) {
}

void Control::userEvent(Map const &map) {
	int user = 0;
	user = wgetch(_view->getWin());
	switch (user) {
		case KEY_RIGHT:
		case 'd':
			_model->getHero()->turnWright(map.getX());
			break;
		case KEY_LEFT:
		case 'a':
			_model->getHero()->turnLeft();
			break;
		case KEY_UP:
		case 'w':
			_model->getHero()->turnUp();
			break;
		case KEY_DOWN:
		case 's':
			_model->getHero()->turnDown(map.getY());
			break;
		case ' ':
		case '\n':
			_model->getHero()->shot();
			break;
		case 'q':
			delete _view;
			exit(0);
		default:
			break;
	}
}

void Control::gameover() {
	int key = 0;
	while (42) {
		key = wgetch(_view->getWin());
		if (key == 'q') {
			delete _view;
			system("reset");
			exit(0);
		}
	}
}
