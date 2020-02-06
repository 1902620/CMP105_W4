#pragma once
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>


class Player: public GameObject, public Input {
public: 
	void handleInput(float dt);
	float speed;

	GameObject Sprite; 
	sf::Texture texture;

};