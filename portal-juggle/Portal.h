#pragma once
#include "Game.h"
#include "Vector2D.h"

class Portal {
public:
	int w, h;
	Vector2D position;
	SDL_Rect rect;
	Portal();
	void Size(int width, int height);
	void Color(int r, int g, int b, int a);
	void Position(int x, int y);
	void Render();
	void Update();
private:
	int r, g, b, a;
};