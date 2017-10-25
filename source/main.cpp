//
// Created by Robin on 22.10.2017.
//

#include <iostream>
#include <GLM/glm.hpp>
#include <SFML/Graphics.hpp>
#include "constant/window_constants.h"

int main()
{

        sf::ContextSettings window_settings = window_constants::get_settings();
        sf::VideoMode window_mode = window_constants::get_video_mode();
        std::string window_name = window_constants::get_window_name();

        sf::RenderWindow window(window_mode, window_name, sf::Style::Default, window_settings);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            window.clear(sf::Color(135, 206, 235, 255));
            window.display();
        }

//    std::cout << "depth bits:" << window_settings.depthBits << std::endl;
//    std::cout << "stencil bits:" << window_settings.stencilBits << std::endl;
//    std::cout << "antialiasing level:" << window_settings.antialiasingLevel << std::endl;
//    std::cout << "version:" << window_settings.majorVersion << "." << window_settings.minorVersion << std::endl;

    std::cout << &window_settings;



}


