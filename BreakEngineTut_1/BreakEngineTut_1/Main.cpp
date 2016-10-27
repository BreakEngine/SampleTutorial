#include <Graphics.hpp>
#include <Infrastructure.hpp>

#include "Game.h"

using namespace std;
using namespace Break;
using namespace Break::Infrastructure;
using namespace Break::Graphics;






void main()
{

	Engine* engine = Services::getEngine();
	engine->setup(make_shared<Game>(),API::OpenGL3_3);
	engine->join();
	engine->start();

}