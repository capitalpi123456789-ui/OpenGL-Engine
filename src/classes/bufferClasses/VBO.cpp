#include "classes/bufferClasses/VBO.h"

VBO::VBO()
{
    glGenBuffers(1, &(this->ID));
    glBindBuffer(GL_ARRAY_BUFFER, this->ID);
}

VBO::~VBO()
{
    glDeleteBuffers(1, &this->ID);
}

void VBO::bind()
{
    glBindBuffer(GL_ARRAY_BUFFER, this->ID);
}

void VBO::unbind()
{
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}