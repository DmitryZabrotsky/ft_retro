//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef MODEL_HPP
#define MODEL_HPP

#include <iostream>
#include "View.hpp"
#include "Background.hpp"
#include "Level.hpp"
#include "Hero.hpp"
#include <time.h>

class Control;

class Model {
private:
	Control *_control;
	View *_view;
	Hero *_hero;
	Background _background;
	Level _level;

	void heroManipulate(Map &map);

public:
	Model();
	Model(Model const &obj);
	~Model();
	Model &operator=(Model const &onj);
	void simulation();
	Hero *getHero() const;
};


#endif
