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
	int _x;
	int _y;
	int _damage;
	Map *_imj;
	AUnit();

public:
	virtual ~AUnit() {} 
	AUnit(int hp, int speed, int damage);
	int getHP() const;
 	int getSpeed() const;
	void setSpeed(int speed); 
	void setHP(int hp);
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	Map *getImj() const;
	int get_damage() const;
	void set_damage(int _damage);

	void set_imj(Map *_imj);

	virtual void appear(Map const &map) = 0;
	virtual void beahavior(Map const &map) = 0;
	void collision(Map const &map);
	void damage(AUnit *unit);
	virtual void play(Map const &map) = 0;
};

#endif
