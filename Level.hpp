//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <iostream>
#include "Enemy.hpp"
#include "IScenario.hpp"
#include "Boss.hpp"


class Level : public IScenario {

private:
	Enemy enemies[20];

public:
	Level();
	Level(Level const &obj);
	~Level();

	Level 	&operator=(Level const &obj);
	void 	mapping(Map &obj);
	void 	play(Map const&map);

    int getScore();

    bool isOver();
};


#endif
