//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Level.hpp"

Level::Level() {

}

Level::Level(Level const &obj) {

}

Level::~Level() {

}

Level& Level::operator=(Level const &obj) {
    return *this;
}



void Level::mapping(Map &map)
{
	// for (int i = 0; i < 20; i++) 
	// {
	// 	Map *img = enemies[i].getImj();
	// }
	for (int i = 0; i < 20; i++) {
//		std::cout << i << std::endl;
		if (enemies[i].getHP() > 0) {
			Map *img = enemies[i].getImj();
			int x = enemies[i].getX();
			int y = enemies[i].getY();

//	 	x =  enemies[i+1].getX();
//		y = enemies[i+1].getY();
//		std::cout << "got\n";
			map.add(img, x, y);
		}
	}
}


void Level::play(Map const&map){
	    for (int i = 0; i < 20; i++)
     		enemies[i].play(map);
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
