//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include "AUnit.hpp"

class Enemy : public AUnit{

private:
	static const int __i_len = 8;
	static const int __i_hight = 1;
	static const char __img[1][8];

public:
	Enemy();

	//Enemy(Enemy const &obj);

	//Enemy &operator=(Enemy const *obj);



	virtual void appear(Map const &map);
	virtual void beahavior(Map const &map);
	virtual void play(Map const &map);
	//void printEnemy();
}; 


#endif
