//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Background.hpp"

Background::Background() {

}

Background::Background(Background const &obj) {

}

Background::~Background() {

}

Background &Background::operator=(Background const &obj) {
	return <#initializer#>;
}

void Background::mapping(Map &map) {
	for (int i = 0; i < 200; i++)
		map.add(stars[i].getImj(), stars[i].getX(), stars[i].getY());
}
