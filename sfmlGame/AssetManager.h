#pragma once
#include <Map>
#include <SFML/Graphics.hpp>
using namespace std;

class AssetManager
{
	map<string, sf::Texture> _textures;
	map<string, sf::Font> _fonts;
public:
	AssetManager(){}
	~AssetManager(){}

	void LoadTexture(string name, string fileName);
	sf::Texture &GetTexture(string name);

	void LoadFont(string name, string fileName);
	sf::Font &GetFont(string name);
	
};

