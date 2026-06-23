#pragma once

#include <glad/glad.h>

class VBO
{
    public:

    GLuint ID;

    VBO();
    ~VBO();

    void bind();
    void unbind();

};