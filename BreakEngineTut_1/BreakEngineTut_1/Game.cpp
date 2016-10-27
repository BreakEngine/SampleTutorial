#include "Game.h"


Game::Game(void)
{
	window = std::make_shared<Window>(1300,700,"BreakEngine");
}


Game::~Game(void)
{
}


void Game::init() 
{

	sp = new SpriteBatch();

	spaceship_pos = Rect(100,200,100,100);
}

void Game::loadResources() 
{
	  img = ResourceLoader<Image>::load("res/tex/space.jpg");
	  bg =  std::make_shared<Texture2D>(img);


	  img2 = ResourceLoader<Image>::load("res/tex/spaceship.png");
	  spaceship =  std::make_shared<Texture2D>(img2);

}

void Game::input()
{

	if(Mouse::getButton(Mouse::Left_Button) == Mouse::State_Down)
	{
		printf("left button pressed \n");
	}

	glm::vec2 mousepos = Mouse::getPosition();

	printf("mouse pos = %f,%f \n",mousepos.x , mousepos.y);


}

void Game::update(TimeStep time)
{
	
	if(GameInput::Keypressed(GameInput::Right))
	{
		spaceship_pos.x += 300 * time.delta;
	}
	if(GameInput::Keypressed(GameInput::Left))
	{
		spaceship_pos.x -= 300 * time.delta;
	}

	if(GameInput::Keypressed(GameInput::Up))
	{
		spaceship_pos.y -= 300 * time.delta;
	}

	if(GameInput::Keypressed(GameInput::Down))
	{
		spaceship_pos.y += 300 * time.delta;
	}



}

void Game::render() 
{

	sp->begin();



	sp->draw(spaceship.get(),spaceship_pos,Rect(0,0,170,102),0,glm::vec2(0,0),false, Color(255,255,255,255));



	sp->draw(bg.get(),0,0,1300,700, Color(255,255,255,255));

	

	sp->end();


}