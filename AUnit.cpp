//
// Created by Anastasia CHEPURNA on 2019-01-20.
//

#include "AUnit.hpp"

AUnit::AUnit() {}


AUnit::AUnit(int hp, int speed): _hp(hp), _speed(speed) {

}

int AUnit::getHP() const {
    return _hp;
}

int AUnit::getSpeed() const {
    return _speed;
}

void AUnit::setSpeed(int speed) {
    _speed = speed;
}

void AUnit::setHP(int hp) {
    _hp = hp;
}

int AUnit::getX() {
    return _x;
}

int AUnit::getY() {
    return _y;
}

void AUnit::setX(int x) {
    _x = x;
}

void AUnit::setY(int y) {
    _y = y;
}

Map &AUnit::getImj() {
    return _imj;
}
