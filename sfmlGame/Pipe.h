#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"
#include <vector>
#include "DEFINITIONS.h"
using namespace std;

	class Pipe
	{
		GameDataRef _data;
		vector<sf::Sprite> pipeSprites;
		vector<sf::Sprite> scoringPipes;
		int _landHeight;
		int _pipeSpawnYOffset;
	public:
		Pipe(GameDataRef data);

		void SpawnBottomPipe();
		void SpawnTopPipe();
		void SpawnInvisiblePipe();
		void SpawnScoringPipe();
		void MovePipes(float dt);
		void DrawPipes();
		void RandomisePipeOffset();

		const vector<sf::Sprite> &GetSprites() const;
		vector<sf::Sprite>& GetScoringSprites();	
	};