//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include "Entry.hpp"

class Map {

private:
	int _x;
	int _y;
	Entry **_map;

	Map();

public:
	Map(int x, int y);
	Map(Map const &obj);
	~Map();
	int getX() const;
	int getY() const;
	void setSymbol(int x, int y, char symbol);
	void setColor(int x, int y, int color);
	void setOwner(int x, int y, AUnit *owner);
	char getSymbol(int x, int y) const;
	int getColor(int x, int y) const;
	AUnit *getOwner(int x, int y) const;
	Map &operator=(Map const &obj);
	void add(Map const *imj, int x, int y);
};


#endif
