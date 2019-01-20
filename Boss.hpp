
#ifndef BOSS_HPP
#define BOSS_HPP

#include <iostream>
#include "AUnit.hpp"

class Boss : public AUnit{

private:
	static const int __i_len = 8;
	static const int __i_hight = 1;
	static const char __img[3][11];

public:
	Boss();

	// virtual void appear(Map const &map);
	// virtual void beahavior(Map const &map);
	// virtual void play(Map const &map);

}; 


#endif
