#pragma once
#ifndef __BACKGROUND__
#define __BACKGROUND__

#include "Sprite.h"

class Background : public Sprite
{
public:
	Background();
	~Background();

	// Life Cycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

private:
	void m_buildAnimations();
};






#endif;
