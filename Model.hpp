//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef MODEL_HPP
#define MODEL_HPP

#include <iostream>
#include "View.hpp"
#include "Control.hpp"
#include "Background.hpp"
#include "Level.hpp"
#include <time.h>

class Model {
private:
	Control *_control;
	View *_view;
	Background _background;
	Level _level;

public:
	Model();
	Model(Model const &obj);
	~Model();
	Model &operator=(Model const &onj);
	void simulation();
};


#endif
