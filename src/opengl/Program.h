#ifndef OPENGL_SHADER
#define OPENGL_SHADER

#include <string>
#include <GL/glew.h>

class Program {
private:
    GLuint ProgramID;
public:
    Program(const std::string &vertexShader, const std::string &fragmentShader);
    ~Program();
    void useProgram() const;
    GLuint getUniformLocation(const std::string& name) const;
};


#endif //OPENGL_SHADER
