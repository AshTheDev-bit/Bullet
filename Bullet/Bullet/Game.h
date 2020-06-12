#ifndef GAME
#define GAME
#include <SFML\Graphics.hpp>
#include "Player.h"


class Game
{
public:
	Game();
	void run();
private:
	void processEvents();
	
	void update(sf::Time);
	void render();
	
	Player m_player;
	sf::RenderWindow m_window;
};

#endif // !GAME
