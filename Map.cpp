//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Map.hpp"


Map::Map(int x, int y) : _x(x), _y(y) {
	_map = new Entry*[y];
	for (int i = 0; i < y; i++)
		_map[i] = new Entry[x]();
}

Map::Map(Map const &obj) {
	*this = obj;
}

Map &Map::operator=(Map const &obj) {
	for (int i = 0; i < _y; i++)
		delete _map[i];
	delete _map;
	this->_x = obj._x;
	this->_y = obj._y;
	_map = new Entry*[_y];
	for (int i = 0; i < _y; i++) {
		_map[i] = new Entry[_x]();
		for (int j = 0; j < _y; j++)
			_map[i][j] = obj._map[i][j];
	}
	return (*this);
}

Map::Map() {}

Map::~Map() {
	for (int i = 0; i < _y; i++)
		delete _map[i];
	delete _map;
}

void Map::add(Map const &imj, int x, int y) {
	for (int i = y; i < _y && i < imj._y + y; i++)
	{
		for (int j = x; j < _x && j < imj._x + x; j++)
			_map[i][j] = imj._map[i - y][j - x];
	}
}

int Map::getX() const {
	return _x;
}

int Map::getY() const {
	return _y;
}

void Map::setSymbol(int x, int y, char symbol) {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		_map[y][x].set_symbol(symbol);
}

void Map::setColor(int x, int y, int color) {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		_map[y][x].set_color(color);
}

void Map::setOwner(int x, int y, AUnit *owner) {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		_map[y][x].set_owner(owner);
}

