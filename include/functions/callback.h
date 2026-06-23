#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

/*
* @brief Function for glfwSetFramebufferSizeCallback
* Sets window size to new resized size
*/
void framebufferSizeCallback(GLFWwindow* window, int width, int height);