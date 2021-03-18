#include "Bat.h"


	Bat::Bat(GameDataRef data) : _data(data)
	{
		_animationIterator = 0;

		_animationFrames.push_back(_data->assets.GetTexture("Bat Frame 1"));
		_animationFrames.push_back(_data->assets.GetTexture("Bat Frame 2"));
		_animationFrames.push_back(_data->assets.GetTexture("Bat Frame 3"));
		_animationFrames.push_back(_data->assets.GetTexture("Bat Frame 4"));

		_batSprite.setTexture(_animationFrames.at(_animationIterator));

		_batSprite.setPosition((_data->window.getSize().x / 4) - (_batSprite.getGlobalBounds().width / 2),
			((_data->window.getSize().y / 2) - (_batSprite.getGlobalBounds().height / 2)));

		_batState = BAT_STATE_STILL;

		sf::Vector2f origin = sf::Vector2f(_batSprite.getGlobalBounds().width / 2, _batSprite.getGlobalBounds().height / 2);

		_batSprite.setOrigin(origin);

		_rotation = 0;
	}

	void Bat::Draw()
	{
		_data->window.draw(_batSprite);
	}

	void Bat::Animate(float dt)
	{
		if (_clock.getElapsedTime().asSeconds() > BAT_ANIMATION_DURATION / _animationFrames.size())
		{
			if (_animationIterator < _animationFrames.size() - 1)
			{
				_animationIterator++;
			}
			else
			{
				_animationIterator = 0;
			}

			_batSprite.setTexture(_animationFrames.at(_animationIterator));

			_clock.restart();
		}
	}

		void Bat::Update(float dt)
		{
			if (BAT_STATE_FALLING == _batState)
			{
				_batSprite.move(0, GRAVITY * dt);

				_rotation += ROTATION_SPEED * dt;

				if (_rotation > 25.0f)
				{
					_rotation = 25.0f;
				}

				_batSprite.setRotation(_rotation);
			}
			else if (BAT_STATE_FLYING == _batState)
			{
				_batSprite.move(0, -FLYING_SPEED * dt);

				_rotation -= ROTATION_SPEED * dt;

				if (_rotation < -25.0f)
				{
					_rotation = -25.0f;
				}

				_batSprite.setRotation(_rotation);
			}

			if (_movementClock.getElapsedTime().asSeconds() > FLYING_DURATION)
			{
				_movementClock.restart();
				_batState = BAT_STATE_FALLING;
			}
		}

		void Bat::Tap()
		{
			_movementClock.restart();
			_batState = BAT_STATE_FLYING;
		}

		const sf::Sprite& Bat::GetSprite() const
		{
			return _batSprite;
		}
	



