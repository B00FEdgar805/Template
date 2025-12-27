#ifndef Game_hpp
#define Game_hpp

#include <SFML/Graphics.hpp>

class Game
{
private:
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 720;
    sf::RenderWindow *WINDOW;
    
public:
    Game();
    ~Game();
    void Run();
    void Render();
    void Update();
    void initScreen();
};

#endif /* Game_hpp */
