//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Bullet.hpp"

Bullet::Bullet(): AUnit(1,1) {

}

Bullet::Bullet(Bullet const &obj): AUnit(obj.getHP(), obj.getSpeed()) {

}

Bullet& Bullet::operator=(Bullet const *obj) {
    return *this;
}