#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <string_view>

/*
* Container class for engine
*/

class Engine
{
    public:

    //@brief Initializes game engine and handles window creation
    Engine();

    // @brief Automatically unallocates resources
    ~Engine();

    // @brief Handles updating and event pulling
    void update();

    // @brief Renders goodies to window
    void render();

    // @brief Pointer to GLFWwindow
    GLFWwindow* window;

    private:

};