//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Model.hpp"

Model::Model() {
	std::cout << "model\n";
	_background = Background();
//	_view = new View();
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
		std::cout << "rrr\n";
		Map map = Map(20, 20);
		std::cout << "create map\n";
		_background.play(map);
		std::cout << "play\n";
		_background.mapping(map);
		std::cout << "going to print\n";
//		_view->printmap(map);
	}
}
