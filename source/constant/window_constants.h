//
// Created by Robin on 25.10.2017.
//

#ifndef HAZELNUT_WINDOW_H
#define HAZELNUT_WINDOW_H

#include <SFML/Graphics.hpp>

namespace window_constants
{
    extern sf::ContextSettings get_settings();
    extern sf::VideoMode get_video_mode();
    extern std::string get_window_name();
}



#endif //HAZELNUT_WINDOW_H
