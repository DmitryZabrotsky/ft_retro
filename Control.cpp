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

void Control::userEvent() {
	int user = 0;
	user = wgetch(_view->getWin());
	switch (user) {
		case KEY_RIGHT:
		case 'd':
			break;
		case KEY_LEFT:
		case 'a':
			break;
		case KEY_UP:
		case 'w':
			break;
		case KEY_DOWN:
		case 's':
			break;
		case ' ':
		case '\n':
			break;
		default:
			break;
	}
}
