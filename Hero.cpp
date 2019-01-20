//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Hero.hpp"

char const Hero :: __img[2][5] = {{'/','_', '|','_','\\'},
                                  {'\\','_','|','_','/'}};

Hero::Hero(): AUnit(4, 2, 2){
    Map *imj = new Map(__i_len, __i_hight);
    for (int i = 0; i < __i_hight; i++)
    {
        for (int j = 0; j < __i_len; j++)
        {
            imj->setColor(j, i, 1);
            imj->setSymbol(j, i, __img[i][j]);
            imj->setOwner(j, i, this);
        }
    }
    set_imj(imj);
}


Hero::Hero(Hero const &obj): AUnit(obj.getHP(), getSpeed(), obj.get_damage()) {
}

Hero& Hero::operator=(Hero const *obj) {
    return *this;
}


void Hero::appear(Map const &map) {
    setY(map.getY() - getImj()->getY() - 2) ;
    setX((map.getX() - getImj()->getX()) / 2);
}

void Hero::beahavior(Map const &map) {
    (void)map;
}

void Hero::play(Map const &map) {
    if (getX() < 0 || getY() < 0)
        appear(map);
}

void Hero::turnLeft() {
    if (getX() - getSpeed() >= 0)
        setX(getX() - getSpeed());
}

void Hero::turnWright(int wind_len) {
    if (getX() + getImj()->getX() + getSpeed() < wind_len)
        setX(getX() + getSpeed());
}

void Hero::turnUp() {
    if (getY() - getSpeed() >= 0)
        setY(getY() - getSpeed());
}

void Hero::turnDown(int win_hight) {
    if (getY() + getImj()->getY() + getSpeed() < win_hight)
        setY(getY() + getSpeed());
}
