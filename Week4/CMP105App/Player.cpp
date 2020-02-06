#include "Player.h";


void Player:: handleInput(float dt) {
	Sprite.setInput(input);
	speed = 500.f;

		if (input->isKeyDown(sf::Keyboard::D)) {
			input->setKeyDown(sf::Keyboard::D);
			Sprite.move(speed * dt, 0);
		}
		if (input->isKeyDown(sf::Keyboard::A)) {
			input->setKeyDown(sf::Keyboard::A);
			Sprite.move(-speed * dt, 0);
		}
		if (input->isKeyDown(sf::Keyboard::W)) {
			input->setKeyDown(sf::Keyboard::W);
			Sprite.move(0, -speed * dt);
		}
		if (input->isKeyDown(sf::Keyboard::S)) {
			input->setKeyDown(sf::Keyboard::S);
			Sprite.move(0, speed * dt);
		}
	}