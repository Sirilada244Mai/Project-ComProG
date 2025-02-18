#pragma once
#include <SFML\Graphics.hpp>
class Animation
{
public:
	Animation();
	Animation(sf::Texture* defaulted);
	Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~Animation();

	void setAnimation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	void Update(int row, float deltaTime);

public:
	sf::IntRect uvRect;

private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime;
	float switchTime;
};