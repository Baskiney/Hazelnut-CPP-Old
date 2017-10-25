//
// Created by Robin on 25.10.2017.
//

#include <iostream>
#include "window_constants.h"

sf::ContextSettings window_constants::get_settings()
{
    sf::ContextSettings settings;
    settings.depthBits = 24;
    settings.stencilBits = 8;
    settings.antialiasingLevel = 4;
    settings.majorVersion = 3;
    settings.minorVersion = 1;
    std::cout << &settings << "\n";

    return settings;
}

sf::VideoMode window_constants::get_video_mode()
{
    sf::VideoMode tmp = sf::VideoMode(1024,786);
    return tmp;
}

extern std::string window_constants::get_window_name()
{
    return "Hazelnut";
}

