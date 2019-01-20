//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#ifndef ISCENARIO_HPP
#define ISCENARIO_HPP

#include "Map.hpp"

class IScenario {
public:
	 virtual void mapping(Map &obj) = 0;
	 virtual void play (Map const &obj) = 0;
	 virtual int getScore() = 0;
	 virtual bool isOver() = 0;

};

#endif
