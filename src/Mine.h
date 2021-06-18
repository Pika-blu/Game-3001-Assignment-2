#pragma once
#ifndef __MINE__
#define __MINE__
#include "NavigationObject.h"

class Mine : public NavigationObject
{
public:
	//Constructor
	Mine();
	//Destructor
	~Mine();

	// Life Cycle Functions Inherited from DisplayObject
	void draw() override;
	void update() override;
	void clean() override;


private:
};

#endif
