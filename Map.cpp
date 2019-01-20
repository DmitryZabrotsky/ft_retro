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
	std::cout <<"add " << _y << " " << _x << std::endl;
	for (int i = 0;i < _y + y ; i++)
	{
		std::cout << x << " " << y << std::endl;
		for (int j = 0; j < _x + x; j++) {
			std::cout << "color " << std::endl;
			setColor(j + x, i + y, imj->getColor(j, i));
			std::cout << "symbol " << std::endl;
			setSymbol(j + x, i + y, '@');
//			_map[i + y][j + x] = imj->_map[i][j];
		}
	}
	std::cout << " added" << std::endl;
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
	std::cout << "getting " << x << " " << y << "; ";
//	std::cout << this->getX();// << " " <<  this->getY() <<  std::endl;
//	if (x >= 0 && x < _x && y >= 0 && y < _y)
//		std::cout << "getting\n";
	return 'u';
//		return _map[y][x].get_color();
//	}
//	else
//		return 0;
}

AUnit *Map::getOwner(int x, int y) const {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		return _map[y][x].get_owner();
	else
		return nullptr;
}

