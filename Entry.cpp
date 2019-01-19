//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Entry.hpp"

Entry::Entry() : _color(1), _symbol(NULL) {}

Entry::Entry(Entry const &obj) {*this = obj;}

Entry &Entry::operator = (Entry const &obj) {
	_color = obj._color;
	_symbol = obj._symbol;
	return (*this);
}

Entry::~Entry() {}
