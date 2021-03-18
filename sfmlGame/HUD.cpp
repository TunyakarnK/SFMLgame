#include "HUD.h"
#include <string>

HUD::HUD(GameDataRef data) : _data(data)
{
	_scoreText.setFont(_data->assets.GetFont("Batty Font"));
	_scoreText.setString("0");
	_scoreText.setCharacterSize(127);
	_scoreText.setFillColor(sf::Color::White);
	_scoreText.setOrigin(_scoreText.getGlobalBounds().width / 2, _scoreText.getGlobalBounds().height / 2);
	_scoreText.setOrigin(_data->window.getSize().x / 2, _data->window.getSize().y / 5);
}
void HUD::Draw()
{
	_data->window.draw(_scoreText);
}

void HUD::UpdateScore(int score)
{
	_scoreText.setString(to_string(score));

}