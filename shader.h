//
// Created by apple on 2022/9/15.
//

#ifndef OPENGL_SHADER_H
#define OPENGL_SHADER_H
#include <iostream>

class shader
{
public:
    //程序ID
    unsigned int ID;

    shader(const char* vertexPath, const char* fragmentPath);

    //使用/激活程序
    void use();

private:
    unsigned int initShader(const char* code, unsigned int type);
    bool checkCompileErrors(unsigned int shader, const std::string type);
};


#endif //OPENGL_SHADER_H
