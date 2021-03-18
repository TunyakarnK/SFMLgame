#pragma once

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"
#include "Pipe.h"
#include "Land.h"
#include "Bat.h"
#include "Collision.h"
#include "Flash.h"
#include "HUD.h"

	class GameState : public State
	{
	public:
		GameState(GameDataRef data);

		void Init();

		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;

		sf::Sprite _background;

		Pipe* pipe;
		Land* land;
		Bat* bat;
		Collision collision;
		Flash* flash;
		HUD* hud;

		sf::Clock clock;

		int _gameState;
		int _score;

	};