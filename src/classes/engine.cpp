#include "classes/engine.h"

#include "functions/callback.h"
#include "functions/init.h"

// Constructor
Engine::Engine()
{
    initGLFW();
    setRenderSettings();
    this->window = createWindow(800, 800, "Engine");
    initGLAD();

    glViewport(0, 0, 800, 800);
    glfwSetFramebufferSizeCallback(this->window, framebufferSizeCallback);
}

// Destructor
Engine::~Engine()
{
    glfwTerminate();
}

// Update
void Engine::update()
{
    glfwPollEvents();
}

// Render
void Engine::render()
{
    glfwSwapBuffers(this->window);
}