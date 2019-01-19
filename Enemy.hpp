//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include "AUnit.hpp"

class Enemy : AUnit{

private:

public:
	Enemy();
	Enemy(Enemy const &obj);

	Enemy &operator=(Enemy const *obj);
};


#endif
