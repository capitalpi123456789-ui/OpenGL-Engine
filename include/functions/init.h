#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

void initGLFW();
void setRenderSettings();
GLFWwindow* createWindow(int width, int height, const char* title);
void initGLAD();