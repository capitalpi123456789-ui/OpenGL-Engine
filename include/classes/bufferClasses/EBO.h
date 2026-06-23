#pragma once

#include <glad/glad.h>

/*
* @brief Element buffer object container class
* Gives an easy way to work with EBOs
*/
class EBO
{
    public:

    // Pointer to EBO object
    GLuint ID;

    /* 
    * Generates new EBO object and assigns it's pointer to ID,
    * automatically binds EBO on creation
    */
    EBO();

    // Deletes EBO
    ~EBO();

    void bind();
    void unbind();

};