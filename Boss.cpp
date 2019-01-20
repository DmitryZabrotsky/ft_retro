#include "Boss.hpp"

char const Boss :: __img[3][11] = {{' ', '/', '\\', '*', '*', '/', '\\', '.', ' ',' ',' '}, {'(', ' ', 'o', '_', 'o', ' ', ' ', ')', '_', ')', ' '}, {',', '(', 'u', ' ', ' ', 'u', ' ', ' ', ',', ')', ','}};


// void Boss::appear(Map const &map) {
// 	setX(rand() % map.getX());
// 	setY(0);
// }

// void Boss::beahavior(Map const &map) {
// 	setY(getY() + getSpeed());
// }

// void Boss::play(Map const &map) {
// 	if (getY() >= 0 && getY() < map.getY())
// 		beahavior(map);
// 	else if (rand() % 150 == 4)
// 		appear(map);
// }


Boss::Boss(): AUnit(1, 0.1, 2) {
	Map *imj = new Map(__i_len, __i_hight);
	for (int i = 0; i < __i_hight; i++)
	{
		for (int j = 0; j < __i_len; j++)
		{
			// std::cout << j << std::endl;
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