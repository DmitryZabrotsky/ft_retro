//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#ifndef STAR_HPP
#define STAR_HPP


#include "AUnit.hpp"

class Star : public AUnit {

private:

public:
	Star();

	void appear(int x, int y) override;
	void beahavior(Map const &map) override;
	void play(Map const &map) override;

};


#endif
