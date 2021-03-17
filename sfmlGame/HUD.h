#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.h"
#include "Game.h"
class HUD
{
	GameDataRef _data;
	sf::Text _scoreText;
	public:
		HUD(GameDataRef data);
		void Draw();
		void UpdateScore(int score);
};

