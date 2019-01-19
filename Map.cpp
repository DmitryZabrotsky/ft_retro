//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Map.hpp"


Map::Map(int x, int y) : _x(x), _y(y) {
//	map = ?????
}

Map::Map(Map const &obj) {

}

Map &Map::operator=(Map const &obj) {
	this->_x = obj._x;
	this->_y = obj._y;
//	this->_map = ?????
	return (*this);
}

Map::Map() {}

Map::~Map() {}
