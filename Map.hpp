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

	Map &operator=(Map const &obj);

};


#endif
