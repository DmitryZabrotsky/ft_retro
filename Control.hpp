//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef CONTROL_HPP
#define CONTROL_HPP

#include <iostream>
#include "Model.hpp"

class Control {
private:
	Model *_model;
	View *_view;
	Control();

public:
	Control(Model *model, View *view);
	Control(Control const &obj);
	~Control();
	Control &operator=(Control const &obj);
	void userEvent();
};


#endif
