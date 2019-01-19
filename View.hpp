//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef VIEW_HPP
#define VIEW_HPP

#include <iostream>

class View {

private:

public:
	View();
	View(View const &obj);
	~View();

	View &operator=(View const &obj);
};


#endif
