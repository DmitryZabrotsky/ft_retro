//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef BACKGROUND_HPP
#define BACKGROUND_HPP

#include <iostream>
#include "Star.hpp"
#include "IScenario.hpp"
#include "Enemy.hpp"

class Background: public IScenario {

private:
	Star stars[200];


public:
	Background();
	Background(Background const &obj);
	~Background();
	Background &operator=(Background const &obj);

	void mapping(Map &obj);
	void play(Map const&map);
};


#endif
