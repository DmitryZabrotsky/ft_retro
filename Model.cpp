//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Model.hpp"

Model::Model() {
	_background = Background();
	_view = new View();
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
	Map map = Map(20, 20);
	_background.Mapping(map);
	_view->printmap(map);
}
