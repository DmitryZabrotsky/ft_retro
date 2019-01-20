//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Model.hpp"

Model::Model() {
	std::cout << "model\n";
	_background = Background();
	_view = new View();
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
		_background.play(map);
		_background.mapping(map);
		_view->printmap(map);
	}
}
