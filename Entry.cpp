//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Entry.hpp"

Entry::Entry() : _color(1), _symbol(NULL) {}

Entry::Entry(Entry const &obj) {*this = obj;}

Entry::~Entry() {}
