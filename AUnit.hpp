//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef AUNIT_HPP
#define AUNIT_HPP

#include "Map.hpp"

class AUnit {

private:
	int _hp; 
	float _speed;
	float _x;
	float _y;
	int _damage;
	Map *_imj;
	AUnit();

public:
	virtual ~AUnit() {} 
	AUnit(float hp, float speed, float damage);
	int getHP() const;
 	float getSpeed() const;
	void setSpeed(float speed);
	void setHP(int hp);
	float getX() const;
	float getY() const;
	void setX(float x);
	void setY(float y);
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
