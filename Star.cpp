//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#include "Star.hpp"

char const Star :: __img[1][1] = {{'.'}};

void Star::appear(Map const &map) {
	setX(rand() % map.getX());
	setY(0);
}

void Star::beahavior(Map const &map) {
	setY(getY() + getSpeed());
}

void Star::play(Map const &map) {
	if (getY() >= 0 && getY() < map.getY())
		beahavior(map);
	else if (rand() % 20 == 4)
		appear(map);
}

Star::Star() : AUnit(0, 1, 0) {
	Map *imj = new Map(__i_len, __i_hight);
	for (int i = 0; i < __i_hight; i++)
	{
		for (int j = 0; j < __i_len; j++)
		{
			imj->setColor(j, i, 1);
			imj->setSymbol(j, i, __img[i][j]);
			imj->setOwner(j, i, this);
		}
	}
	set_imj(imj);
}


