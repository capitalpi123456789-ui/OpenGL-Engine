#include "engine/engine.h"

int main()
{

    Engine engine;

    while(!glfwWindowShouldClose(engine.window))
    {
        engine.update();
        engine.render();
    }

    return 0;
    
}