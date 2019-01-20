
#ifndef BOSS_HPP
#define BOSS_HPP

#include <iostream>
#include "Hero.hpp"

class Boss : public AUnit{

private:
	static const int __i_len = 11;
	static const int __i_hight = 3;
	static const char __img[3][11];

	Bullet bullets[50];
	void shot();

public:
	Boss();

	 virtual void appear(Map const &map);
	 virtual void beahavior(Map const &map);
	 virtual void play(Map const &map);
	 void mapping(Map &map);

}; 


#endif
