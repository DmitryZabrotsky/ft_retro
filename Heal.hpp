//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#ifndef HEAL_HPP
#define HEAL_HPP

#include <iostream>
#include "AUnit.hpp"

class Heal : public AUnit {

private:
	static const int __i_len = 5;
	static const int __i_hight = 1;
	static const char __img[1][5];

public:
	Heal();

	//Heal(Heal const &obj);

	//Heal &operator=(Heal const *obj);



	virtual void appear(Map const &map);
	virtual void beahavior(Map const &map);
	virtual void play(Map const &map);
	//void printHeal();

};


#endif
