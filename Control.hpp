//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef CONTROL_HPP
#define CONTROL_HPP

#include <iostream>

class Control {

private:

public:
	Control();
	Control(Control const &obj);
	~Control();

	Control &operator=(Control const &obj);
};


#endif
