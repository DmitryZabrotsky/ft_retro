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

<<<<<<< HEAD
void Background::Mapping(Map &obj) {

=======
void Background::mapping(Map &map) {
	for (int i = 0; i < 200; i++)
		map.add(stars[i].getImj(), stars[i].getX(), stars[i].getY());
>>>>>>> c53524e61ddf37658e592e5e70c8266ac1773303
}
