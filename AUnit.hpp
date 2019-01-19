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
	nt getHP() const;
virtual int getSpeed() const; virtual 

};

#endif AUNIT_HPP
