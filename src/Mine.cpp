#include "Mine.h"
#include "TextureManager.h"

Mine::Mine()
{
	TextureManager::Instance().load("../Assets/textures/mine.png", "mine");

	auto size = TextureManager::Instance().getTextureSize("mine");
	setWidth(size.x);
	setHeight(size.y);

	getRigidBody()->isColliding = false;
	setType(MINE);
}

Mine::~Mine()
= default;

void Mine::draw()
{
	// alias for x and y
	const auto x = getTransform()->position.x;
	const auto y = getTransform()->position.y;

	// draw the Mine
	TextureManager::Instance().draw("mine", x, y, 0, 255, true);
}

void Mine::update()
{
}

void Mine::clean()
{
}
