//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef AUNIT_HPP
#define AUNIT_HPP

class AUnit {

private:
	int _hp; 
	int _speed;
	AEvent *event;

public:
	virtual ~AUnit() {} 
	AUnit(int hp, int speed);
	int getHP() const;
 int getSpeed() const; 
	void setSpeed(int speed); 
	void setHP(int hp);
};

#endif AUNIT_HPP
