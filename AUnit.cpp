//
// Created by Anastasia CHEPURNA on 2019-01-20.
//

#include "AUnit.hpp"

AUnit::AUnit() {
}


AUnit::AUnit(float hp, float speed, float damage): _hp(hp), _speed(speed), _damage(damage) {
    _x = -1;
    _y = -1;
    _imj = nullptr;
}

int AUnit::getHP() const {
    return _hp;
}

float AUnit::getSpeed() const {
    return _speed;
}

void AUnit::setSpeed(float speed) {
    _speed = speed;
}

void AUnit::setHP(int hp) {
    _hp = hp;
}

float AUnit::getX() const {
    return _x;
}

float AUnit::getY() const {
    return _y;
}

void AUnit::setX(float x) {
    _x = x;
}

void AUnit::setY(float y) {
    _y = y;
}

Map *AUnit::getImj() const {
    return _imj;
}

void AUnit::set_imj(Map *_imj) {
    AUnit::_imj = _imj;
}

int AUnit::get_damage() const {
    return _damage;
}

void AUnit::set_damage(int _damage) {
    AUnit::_damage = _damage;
}

void AUnit::collision(Map const &map) {
    if (_imj == nullptr || _x < 0 || _y < 0)
        return;
    for (int i = 0; i < _imj->getY(); i++) {
        for (int j = 0; j < _imj->getX(); j++) {
            AUnit *target = map.getOwner(j + _x, i + _y);
            printf("11111");
            if (target != nullptr && target != this) {
//                exit(1);
                target->damage(this);
                damage(target);
                break;
            }
        }
    }
}

void AUnit::damage(AUnit *unit) {
    setHP(getHP() - unit->get_damage());
}

