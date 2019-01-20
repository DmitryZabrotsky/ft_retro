//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef BULLET_HPP
#define BULLET_HPP

#include <iostream>
#include "AUnit.hpp"

class Bullet : public AUnit {

private:
	static const int __i_len = 1;
	static const int __i_hight = 1;
	static const char __img[1][1];
	Bullet();

public:
	Bullet(int speed);
	Bullet(Bullet const &obj);
	Bullet &operator=(Bullet const *obj);

	void appear(Map const &map);
	void beahavior(Map const &map);
	void collision(Map const &map);
	void play(Map const &map);
    void damage(AUnit *unit);
};


#endif
