#pragma once
#include <Graphics.hpp>
#include <Infrastructure.hpp>

using namespace std;
using namespace Break;
using namespace Break::Infrastructure;
using namespace Break::Graphics;


class Game  : public Application
{
public:
	Game(void);
	~Game(void);

	SpriteBatch *sp;

	ImagePtr img;
	Texture2DPtr bg;

	ImagePtr img2;
	Texture2DPtr spaceship;

	Rect spaceship_pos;


	void init() override;

	void loadResources() override;

	void input() override;

	void update(TimeStep time) override;

	void render() override;

};

