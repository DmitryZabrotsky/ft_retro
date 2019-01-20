//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Bullet.hpp"

char const Bullet:: __img[1][1] = {{'*'}};

Bullet::Bullet() : AUnit(1, 0, 1) {
}

Bullet::Bullet(Bullet const &obj): AUnit(obj.getHP(), obj.getSpeed(), obj.get_damage()) {
}

Bullet& Bullet::operator=(Bullet const *obj) {
    return *this;
}

Bullet::Bullet(int speed): AUnit(1, speed, 1) {
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

void Bullet::appear(Map const &map) {
    (void)map;
}

void Bullet::beahavior(Map const &map) {
    if (getY() > map.getY() || getY() < 0 || getHP() <= 0) {
        setY(-1);
        setY(-1);
        setHP(1);
    }
    else
        setY(getY() + getSpeed());
}

void Bullet::play(Map const &map) {
    beahavior(map);
}

