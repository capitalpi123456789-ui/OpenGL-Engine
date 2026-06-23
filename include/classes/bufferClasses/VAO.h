#pragma once

#include <glad/glad.h>

/*
* @brief Vertex array object container class
* Gives an easy way to work with VAOs
*/
class VAO
{
    public:

    // Pointer to VAO object
    GLuint ID;

    /* 
    * Generates new VAO object and assigns it's pointer to ID,
    * automatically binds VAO on creation
    */
    VAO();

    // Deletes VAO
    ~VAO();

    void bind();
    void unbind();

};