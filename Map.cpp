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
//	for (int i = 0; i < _y; i++)
//		delete _map[i];
//	delete _map;
	this->_x = obj._x;
	this->_y = obj._y;
//	_map = new Entry*[_y];
//	for (int i = 0; i < _y; i++) {
//		_map[i] = new Entry[_x]();
//		for (int j = 0; j < _y; j++)
//			_map[i][j] = obj._map[i][j];
//	}
	return (*this);
}

Map::Map() {}

Map::~Map() {
//	for (int i = 0; i < _y; i++)
//		delete _map[i];
//	delete _map;
}

void Map::add(Map const *imj, int x, int y) {
	if (x < 0 || y < 0)
		return;
	for (int i = 0;i < _y + y ; i++)
	{
		for (int j = 0; j < _x + x; j++) {
			setColor(j + x, i + y, imj->getColor(j, i));
			setSymbol(j + x, i + y, imj->getSymbol(j, i));
		}
	}
}

int Map::getX() const {
	return _x;
}

int Map::getY() const{
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

char Map::getSymbol(int x, int y) const {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		return _map[y][x].get_symbol();
	else
		return ' ';
}

int Map::getColor(int x, int y) const {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		return _map[y][x].get_color();
	else
		return 0;
}

AUnit *Map::getOwner(int x, int y) const {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		return _map[y][x].get_owner();
	else
		return nullptr;
}

