#include "Game.hpp"

Game::Game()
{
    WINDOW = new sf::RenderWindow(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Name"); // Set window size and title
}

Game::~Game()
{
    delete WINDOW;
}

void Game::initScreen()
{
    WINDOW -> setFramerateLimit(60);
    WINDOW -> setVerticalSyncEnabled(true);
    
    while (WINDOW -> isOpen())
    {
        // Process events
        sf::Event event;
        while (WINDOW -> pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                WINDOW -> close();
            }
            
            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            {
                WINDOW -> close();
            }
        }
        WINDOW -> clear();
        //Render();   // Draws all the objects
        //Update();   // Main game loop
        WINDOW -> display();
    }
}

void Game::Render()
{
    
}

void Game::Run()
{
    initScreen();
}

void Game::Update()
{
    
}
