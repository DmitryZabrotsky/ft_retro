//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef HERO_HPP
#define HERO_HPP

#include <iostream>

#include "AUnit.hpp"

class Hero : public AUnit {

private:

public:
	Hero();
	Hero(Hero const &obj);

	Hero &operator=(Hero const *obj);

};


#endif
