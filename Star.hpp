//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#ifndef STAR_HPP
#define STAR_HPP


#include "AUnit.hpp"

class Star : public AUnit {

private:
	static const int __i_len = 1;
	static const int __i_hight = 1;
	static const char __img[1][1];

public:
	Star();
	virtual void appear(Map const &map);
	virtual void beahavior(Map const &map);
	virtual void play(Map const &map);
	void collision(Map const &map);
	void damage(AUnit *unit);
};


#endif
