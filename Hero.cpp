//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Hero.hpp"

char const Hero :: __img[2][5] = {{'/','_', '|','_','\\'},
                                  {'\\','_','|','_','/'}};

Hero::Hero(): AUnit(4, 2, 2){

}


Hero::Hero(Hero const &obj): AUnit(obj.getHP(), getSpeed(), obj.get_damage()) {

}

Hero& Hero::operator=(Hero const *obj) {
    return *this;
}


void Hero::appear(Map const &map) {

}

void Hero::beahavior(Map const &map) {

}

void Hero::play(Map const &map) {

}
