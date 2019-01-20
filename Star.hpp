//
// Created by Dmitry ZABROTSKY on 2019-01-20.
//

#ifndef STAR_HPP
#define STAR_HPP


#include "AUnit.hpp"

class Star : public AUnit {

private:
	const int __i_len = 1;
	const int __i_hight = 1;
	const char __img[1][1] = {{'.'}};

public:
	Star();
	void appear(Map const &map) override;
	void beahavior(Map const &map) override;
	void play(Map const &map) override;

};


#endif
