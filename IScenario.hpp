//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#ifndef ISCENARIO_HPP
#define ISCENARIO_HPP

#include "Map.hpp"

class IScenario {

public:
	virtual void Mapping(Map &obj) = 0;
};

#endif
