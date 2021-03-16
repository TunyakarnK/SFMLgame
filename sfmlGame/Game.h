#pragma once
#include <memory>
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "StateMachine.h"
#include "AssetManager.h"
#include "InputManager.h"
using namespace std;

struct GameData 
{
	StateMachine machine;
	sf::RenderWindow window;
	AssetManager assets;
	InputManager input;
};
typedef shared_ptr<GameData> GameDataRef;

class Game
{
	const float dt = 1.0f / 60.0f;
	sf::Clock _clock;

	GameDataRef _data = make_shared<GameData>();
	void Run();

public:
	Game(int width, int height, string title);
};

