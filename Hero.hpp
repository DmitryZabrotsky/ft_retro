//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef HERO_HPP
#define HERO_HPP

#include <iostream>

#include "AUnit.hpp"
#include "Bullet.hpp"

class Hero : public AUnit {

private:
	static const int __i_len = 5;
	static const int __i_hight = 2;
	static const char __img[2][5];
	Bullet bullets[7];

public:
	Hero();
	Hero(Hero const &obj);

	Hero &operator=(Hero const *obj);

	virtual void appear(Map const &map);
	virtual void beahavior(Map const &map);
	virtual void play(Map const &map);
	void mapping(Map &map);
	void shot();
	void turnLeft();
	void turnWright(int win_len);
	void turnUp();
	void turnDown(int win_hight);
};


#endif