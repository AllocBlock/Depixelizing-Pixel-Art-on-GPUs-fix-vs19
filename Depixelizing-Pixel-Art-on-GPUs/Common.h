#pragma once
#include <glad/glad.h>

inline void check()
{
    int Error = glGetError();
    if (Error)
        throw "error";
}