#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.h"
#include "Game.h"
#include <vector>

class Bat
{
	public:
		Bat(GameDataRef data);
		void Draw();
		void Animate(float dt);
		void Update(float dt);
		void Tap();
		const sf::Sprite& GetSprite() const;
	private:
		GameDataRef _data;
		sf::Sprite _batSprite;
		std::vector<sf::Texture> _animationFrames;
		unsigned int _animationIterator;
		sf::Clock _clock;
		sf::Clock _movementClock;
		int _batState;
		float _rotation;
};

