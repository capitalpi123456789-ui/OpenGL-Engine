#pragma once

#include <glad/glad.h>

/*
* @brief Vertex buffer object container class
* Gives an easy way to work with VBOs
*/
class VBO
{
    public:

    // Pointer to VBO object
    GLuint ID;

    /* 
    * Generates new VBO object and assigns it's pointer to ID,
    * automatically binds VBO on creation
    */
    VBO();

    // Deletes VBO
    ~VBO();

    void bind();
    void unbind();

};