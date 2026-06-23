#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Throws error if GLFW fails to initialize
void initGLFW();

// Sets OpenGL window hints
void setRenderSettings();

/*
* @brief Return new GLFWwindow pointer
* Creates a window using GLFW with specifed width, height, and title
*/
GLFWwindow* createWindow(int width, int height, const char* title);

// Throws error if GLAD fails to initialize
void initGLAD();