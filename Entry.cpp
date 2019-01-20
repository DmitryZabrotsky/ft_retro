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

int Entry::get_color() const {
	return _color;
}

char Entry::get_symbol() const {
	return _symbol;
}

AUnit *Entry::get_owner() const {
	return _owner;
}

void Entry::set_color(int _color) {
	Entry::_color = _color;
}

void Entry::set_symbol(char _symbol) {
	Entry::_symbol = _symbol;
}

void Entry::set_owner(AUnit *_owner) {
	Entry::_owner = _owner;
}
