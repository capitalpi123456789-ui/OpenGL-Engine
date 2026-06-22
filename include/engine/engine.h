#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <string_view>

/*
* Container class for entire engine
*/

class Engine
{
    public:

    // Constructor / Destructor
    Engine();
    ~Engine();

    // Updating functions
    void update();
    void render();

    GLFWwindow* window;

    private:

};