//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Hero.hpp"

Hero::Hero(): AUnit(4, 2, 2){

}

Hero::Hero(Hero const &obj): AUnit(obj.getHP(), getSpeed(), obj.get_damage()) {

}

Hero& Hero::operator=(Hero const *obj) {
    return *this;
}
