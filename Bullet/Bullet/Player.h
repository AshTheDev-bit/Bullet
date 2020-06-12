#pragma once
#include <SFML/graphics.hpp>
#include <iostream>
class Player
{
public:
	Player();

	void processEvents(sf::Event &t_event);

	void update(sf::Time dt);
	void render(sf::RenderWindow &t_window);
private:
	void jump(sf::Time dt);
	void walk(sf::Time dt);

	// this is w here we consider if making our own fsm is worth it (which it wont be)
	enum class PlayerState
	{
		Jumping,
		Walking,
		Falling,
		Ground
	};
	PlayerState m_jumpState = PlayerState::Ground;

	sf::RectangleShape m_body;
	sf::Vector2f m_position;
	float m_massKG;

	// Initial Walking speed of the player
	sf::Vector2f m_walkingInitialVelocity; 
	sf::Vector2f m_velocity{ 0.0f,0.0f };
	const sf::Vector2f m_MAX_WALK_SPEED{ 0.7f,0.0f };
	const sf::Vector2f m_MAX_JUMP_SPEED; 
	sf::Vector2f m_Velocity{ 0,0 };

};

