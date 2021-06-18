#include "Background.h"
#include "TextureManager.h"

Background::Background()
{
	TextureManager::Instance().load("../Assets/textures/tileMap.png", "background");

	auto size = TextureManager::Instance().getTextureSize("background");
	setWidth(size.x);
	setHeight(size.y);

	getRigidBody()->isColliding = false;
	setType(BACKGROUND);
}

Background::~Background()
= default;

void Background::draw()
{
	// alias for x and y
	const auto x = getTransform()->position.x;
	const auto y = getTransform()->position.y;

	TextureManager::Instance().draw("background", 0, 0, 0, 255, false);
}

void Background::update()
{
}

void Background::clean()
{
}

