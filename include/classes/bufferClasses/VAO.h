#pragma once

#include <glad/glad.h>

class VAO
{
    public:

    GLuint ID;

    VAO();
    ~VAO();

    void bind();
    void unbind();

};