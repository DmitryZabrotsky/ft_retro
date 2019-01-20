//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Bullet.hpp"

char const Bullet:: __img[1][1] = {{'*'}};

Bullet::Bullet() : AUnit(1, -0.2, 1) {
    Map *imj = new Map(__i_len, __i_hight);
    for (int i = 0; i < __i_hight; i++)
    {
        for (int j = 0; j < __i_len; j++)
        {
            imj->setColor(j, i, 3);
            imj->setSymbol(j, i, __img[i][j]);
            imj->setOwner(j, i, this);
        }
    }
    set_imj(imj);
}

Bullet::Bullet(Bullet const &obj): AUnit(obj.getHP(), obj.getSpeed(), obj.get_damage()) {
}

Bullet& Bullet::operator=(Bullet const *obj) {
    return *this;
}

void Bullet::appear(Map const &map) {
    (void)map;
}

void Bullet::beahavior(Map const &map) {
    if (getY() > map.getY() || getY() < 0 || getHP() <= 0) {
        setY(-1);
        setX(-1);
        setHP(1);
    }
    else
        setY(getY() + getSpeed());
}

void Bullet::play(Map const &map) {
    beahavior(map);
}

void Bullet::shot(AUnit *unit) {
    float x = unit->getX() + unit->getImj()->getX() / 2;
    float y = unit->getY() - 1;
    setX(x);
    setY(y);
}

void Bullet::shotBoss(AUnit *unit) {
    float x = unit->getX() + unit->getImj()->getX() / 2;
    float y = unit->getY() + unit->getY();
    setX(x);
    setY(y);
}

