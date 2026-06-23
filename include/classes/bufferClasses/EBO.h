#pragma once

#include <glad/glad.h>

class EBO
{
    public:

    GLuint ID;

    EBO();
    ~EBO();
    
    void bind();
    void unbind();

};