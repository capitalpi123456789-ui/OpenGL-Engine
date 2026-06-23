#include "classes/bufferClasses/VAO.h"

VAO::VAO()
{
    glGenVertexArrays(1, &ID);
    glBindVertexArray(this->ID);
}

VAO::~VAO()
{
    glDeleteVertexArrays(1, &(this->ID));
}

void VAO::bind()
{
    glBindVertexArray(this->ID);
}

void VAO::unbind()
{
    glBindVertexArray(0);
}