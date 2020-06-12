#include "Player.h"



Player::Player()
{
	m_walkingInitialVelocity = sf::Vector2f{ 0.80f,0.0f };
	m_position = sf::Vector2f{ 200,200 };
	m_body.setPosition(m_position);
	m_body.setFillColor(sf::Color::Red);
	m_body.setSize(sf::Vector2f(5, 5));
}

void Player::processEvents(sf::Event & t_event)
{
	if (t_event.KeyPressed)
	{
		
	}
	
}

void Player::update(sf::Time dt)
{
	
}

void Player::render(sf::RenderWindow & t_window)
{
	t_window.draw(m_body);
}

void Player::jump(sf::Time dt)
{
}

void Player::walk(sf::Time dt)
{
	
}
