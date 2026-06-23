#include "classes/bufferClasses/EBO.h"

EBO::EBO()
{
    glGenBuffers(1, &(this->ID));
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, this->ID);
}

EBO::~EBO()
{
    glDeleteBuffers(1, &(this->ID));
}

void EBO::bind()
{
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, this->ID);
}

void EBO::unbind()
{
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
