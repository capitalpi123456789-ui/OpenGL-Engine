#include "engine/engine.h"
#include "callback.h"

// Constructor
Engine::Engine()
{
    if (!glfwInit())
    {
        std::cout << "Failed to initialize GLFW" << std::endl;
    }

    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    this->window = glfwCreateWindow(900, 900, "Engine", NULL, NULL);
    if (this->window == NULL)
    {
        std::cout << "Failed to open GLFW window" << std::endl;
    }
    glfwMakeContextCurrent(this->window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
    }

    glViewport(0, 0, 800, 600);
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