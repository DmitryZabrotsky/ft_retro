//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

// описание точки на крате. кому принадлежит, как выглядит.

#ifndef ENTRY_HPP
#define ENTRY_HPP

#include <iostream>
#include "AUnit.hpp"

class Entry {

private:
	int		_color;
	char	_symbol;
	AUnit	*_owner;

public:
	Entry();
	Entry(Entry const &obj);
	~Entry();

	Entry &operator = (Entry const &obj);

	int get_color() const;

	char get_symbol() const;

	AUnit *get_owner() const;

	void set_color(int _color);

	void set_symbol(char _symbol);

	void set_owner(AUnit *_owner);

};


#endif
