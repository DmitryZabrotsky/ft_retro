//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef MODEL_HPP
#define MODEL_HPP

#include <iostream>

class Model {

private:

public:
	Model();
	Model(Model const &obj);
	~Model();

	Model &operator=(Model const &onj);

};


#endif
