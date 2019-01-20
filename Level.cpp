//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Level.hpp"

Level::Level() {
	boss = new Boss();
}

Level::Level(Level const &obj) {

}

Level::~Level() {
	delete(boss);
}

Level& Level::operator=(Level const &obj) {
    return *this;
}



void Level::mapping(Map &map)
{
	for (int i = 0; i < 20; i++) {
		if (enemies[i].getHP() > 0) {
			Map *img = enemies[i].getImj();
			int x = enemies[i].getX();
			int y = enemies[i].getY();
			map.add(img, x, y);
		}
	}
	for (int i = 0; i < 4; i++) {
		if (heals[i].getHP() > 0) {
			Map *img = heals[i].getImj();
			int x = heals[i].getX();
			int y = heals[i].getY();
			map.add(img, x, y);
		}
	}
	boss->mapping(map);
}


void Level::play(Map const&map){
	    for (int i = 0; i < 20; i++)
     		enemies[i].play(map);
	    for (int i = 0; i < 4; i++)
			heals[i].play(map);
	    if (isOver() && boss->getX() < 0)
	    	boss->appear(map);
	    boss->play(map);
}

int Level::getScore() {
	int score = 0;
	for (int i = 0; i < 20; i++) {
		if (enemies[i].getHP() <= 0)
			score++;
	}
	return score;
}

bool Level::isOver() {
	return (getScore() > 12);
}

bool Level::ifVictory() {
    return boss->getHP() <= 0;
}
