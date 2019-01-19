//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

// описание точки на крате. кому принадлежит, как выглядит.

#ifndef ENTRY_HPP
#define ENTRY_HPP

#include <iostream>

class Entry {

private:
	int		_color;
	char	_symbol;

private:
	Entry();
	Entry(Entry const &obj);
	~Entry();

	Entry &operator = (Entry const &obj);

};


#endif
