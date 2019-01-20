//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Model.hpp"
#include "Control.hpp"

Model::Model() {
	std::cout << "model\n";
	_background = Background();
	_level = Level();
	_hero = new Hero();
	_view = new View(this);
	_control = new Control(this, _view);

	srand(time(0));
}

Model::Model(Model const &obj) {

}

Model::~Model() {
	delete(_view);
}

Model &Model::operator=(Model const &onj) {
	return *this;
}

void Model::simulation() {
	while (42) {
		Map map = Map(_view->get_x_wmax(), _view->get_y_wmax());
		 // Map map = Map(20, 20);
		_background.play(map);
		_background.mapping(map);
		_level.play(map);
		_level.mapping(map);
		heroManipulate(map);
		_view->printmap(map);
	}
}

Hero *Model::getHero() const {
	return _hero;
}

void Model::heroManipulate(Map &map) {
	if (_hero->getX() < 0 || _hero->getY() < 0)
		_hero->appear(map);
	_hero->play(map);
	_control->userEvent(map);
	_hero->mapping(map);
//	map.add(_hero->getImj(), _hero->getX(), _hero->getY());
}


// (ಠ o ಠ)¤=[]:::::>


// /\**/\
//( o_o  )_)
//,(u  u  ,),

