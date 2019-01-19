//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef BULLET_HPP
#define BULLET_HPP

#include <iostream>
#include "AUnit.hpp"

class Bullet : public AUnit{

private:

public:
	Bullet();
	Bullet(Bullet const &obj);

	Bullet &operator=(Bullet const *obj);
};


#endif
