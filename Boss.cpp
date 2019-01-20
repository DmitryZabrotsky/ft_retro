#include "Boss.hpp"

char const Boss :: __img[3][11] = {{' ', '/', '\\', '*', '*', '/', '\\', '.', ' ',' ',' '}, {'(', ' ', 'o', '_', 'o', ' ', ' ', ')', '_', ')', ' '}, {',', '(', 'u', ' ', ' ', 'u', ' ', ' ', ',', ')', ','}};


 void Boss::appear(Map const &map) {
 	setX(rand() % map.getX());
 	setY(0);
	 for (int i = 0; i < 50; i++)
		 bullets[i].setSpeed(0.2);
 }

 void Boss::beahavior(Map const &map) {
 	if (getY() < 0 || getX() < 0)
		return;
 	if (getX() + getSpeed() <= 0 || getX() + getSpeed() + getImj()->getX() > map.getX())
 		setSpeed(getSpeed() * -1);
 	setX(getX() + getSpeed());
 	if (rand() % 100 == 4)
 		shot();
 }

 void Boss::play(Map const &map) {
 	beahavior(map);
	 for (int i = 0; i < 50; i++)
		 bullets[i].play(map);
	 collision(map);
	 for (int i = 0; i < 50; i++)
		 bullets[i].collision(map);
 }


Boss::Boss(): AUnit(4, 0.2, 2) {
	Map *imj = new Map(__i_len, __i_hight);
	for (int i = 0; i < __i_hight; i++)
	{
		for (int j = 0; j < __i_len; j++)
		{
			imj->setColor(j, i, 4);
			imj->setSymbol(j, i, __img[i][j]);
			imj->setOwner(j, i, this);
		}
	}
	set_imj(imj);
}



// (ಠ o ಠ)¤=[]:::::>


// /\**/\.   
//( o_o  )_) 
//,(u  u  ,),


// {'(', ' ', 'o', '_', 'o', ' ', ' ', ')', '_', ')', ' '}
// {',', '(', 'u', ' ', ' ', 'u', ' ', ' ', ',', ')', ','}

void Boss::shot() {
	for (int i = 0; i < 50; i++)
	{
		if (bullets[i].getY() < 0 || bullets[i].getX() < 0) {
			bullets[i].shotBoss(this);
			break;
		}
	}
}

void Boss::mapping(Map &map) {
	for (int i = 0; i < 8; i++) {
		Map *img = bullets[i].getImj();
		int x =  bullets[i].getX();
		int y = bullets[i].getY();
		map.add(img, x, y);
	}
	map.add(getImj(), getX(), getY());
}
