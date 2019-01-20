//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#include "Heal.hpp"

// +H+P+

char const Heal :: __img[1][5] = {{'+','H','+','P','+'}};

void Heal::appear(Map const &map) {
	setX(rand() % map.getX());
	setY(0);
}

void Heal::beahavior(Map const &map) {
	setY(getY() + getSpeed());
}

void Heal::play(Map const &map) {
	if (getY() >= 0 && getY() < map.getY())
		beahavior(map);
	else if (rand() % 1000 == 4)
		appear(map);
}


Heal::Heal(): AUnit(1, 0.05, -1) {
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