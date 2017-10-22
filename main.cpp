#include <iostream>
#include <GLM/glm.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    std::cout << "Starten ... \n";
    glm::vec3 my_vector = glm::vec3(1,1,1);
    bool open = false;

        // create the window
        sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

        // run the program as long as the window is open
        while (window.isOpen())
        {
            open = true;
            // check all the window's events that were triggered since the last iteration of the loop
            sf::Event event;
            while (window.pollEvent(event))
            {
                // "close requested" event: we close the window
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            // clear the window with black color
            window.clear(sf::Color::Black);

            // draw everything here...
            // window.draw(...);

            // end the current frame
            window.display();
        }

    if (my_vector[0] == 1)
    {
        std::cout << "GLM erfolgreich statisch gelinkt!\n";
    }
    if (open)
    {
        std::cout << "SFML erfolgreich statisch gelinkt!";
    }
    std::cin.get();


}

