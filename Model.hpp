//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef MODEL_HPP
#define MODEL_HPP

#include <iostream>
#include "View.hpp"
#include "Control.hpp"
#include "Background.hpp"

class Model {
private:
	Control *control;
	View *view;
	Background *background;

public:
	Model();
	Model(Model const &obj);
	~Model();
	Model &operator=(Model const &onj);
};


#endif
