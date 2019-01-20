//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef AUNIT_HPP
#define AUNIT_HPP

#include "Map.hpp"

class AUnit {

private:
	int _hp; 
	int _speed;
	int _x = -1;
	int _y = -1;
	Map *_imj;
	AUnit();

public:
	virtual ~AUnit() {} 
	AUnit(int hp, int speed);
	int getHP() const;
 	int getSpeed() const;
	void setSpeed(int speed); 
	void setHP(int hp);
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	Map *getImj() const;

	void set_imj(Map *_imj);

	virtual void appear(Map const &map) = 0;
	virtual void beahavior(Map const &map) = 0;
//	virtual void collision(Map const &map) = 0;
	virtual void play(Map const &map) = 0;
};

#endif
