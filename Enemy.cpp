//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Enemy.hpp"

char const Enemy :: __img[1][8] = {{'(','^','.','_','.', '^', ')', '/'}};

void Enemy::appear(Map const &map) {
	setX(rand() % map.getX());
	setY(0);
}

void Enemy::beahavior(Map const &map) {
	setY(getY() + getSpeed());
}

void Enemy::play(Map const &map) {
	if (getY() >= 0 && getY() < map.getY())
		beahavior(map);
	else if (rand() % 150 == 4)
		appear(map);
}


Enemy::Enemy(): AUnit(1, 0.1, 1) {
	Map *imj = new Map(__i_len, __i_hight);
	for (int i = 0; i < __i_hight; i++)
	{
		for (int j = 0; j < __i_len; j++)
		{
			// std::cout << j << std::endl;
			imj->setColor(j, i, 1);
			imj->setSymbol(j, i, __img[i][j]);
			imj->setOwner(j, i, this);
		}
	}
	set_imj(imj);
}
