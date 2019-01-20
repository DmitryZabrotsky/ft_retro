//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Enemy.hpp"

Enemy::Enemy(): AUnit(2, 2) {

}

Enemy::Enemy(Enemy const &obj): AUnit(obj.getSpeed(), obj.getHP()) {

}

Enemy& Enemy::operator=(Enemy const *obj) {
    return *this;
}