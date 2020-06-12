
// Author Ashleigh Henry
// @brief 
// File for testing physics movements with player, particles and shapes. 
// @CurrentBugs
// All of it

#include "Game.h"
#include <iostream>

Game::Game() :
	m_window{ sf::VideoMode{ 1024, 720 }, "Bullet" }
{
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f);
	while (m_window.isOpen())
	{
		processEvents();
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents();
			update(timePerFrame);
		}
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
		m_player.processEvents(event);
	}
}

void Game::update(sf::Time dt)
{
	m_player.update(dt);
}

void Game::render()
{
	m_window.clear();
	m_player.render(m_window);
	m_window.display();
}
