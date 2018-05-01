#ifndef OPENGL_GL_MESH_H
#define OPENGL_GL_MESH_H

#include <vector>
#include <memory>

#include <GL/glew.h>

#include "../objects/Point.h"

namespace RR::OpenGL {

    class Mesh {

    private:
        std::unique_ptr<const std::vector<float>> vertices;
        std::unique_ptr<const std::vector<unsigned short>> indices;
        std::unique_ptr<const std::vector<unsigned char>> colors;
        GLuint VertexArrayID;
        GLuint vertexBuffer;
        GLuint elementBuffer;
        GLuint colorBuffer;

    public:
        Mesh(std::unique_ptr<const std::vector<float>> vertices,
               std::unique_ptr<const std::vector<unsigned short>> indices,
               std::unique_ptr<const std::vector<unsigned char>> colors = nullptr);

        ~Mesh();

        void render() const;
    };

}


#endif //OPENGL_GL_MESH_H
