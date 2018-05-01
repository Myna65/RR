#include "Mesh.h"
#include <memory>

namespace RR::OpenGL {

    Mesh::Mesh(std::unique_ptr<const std::vector<float>> _vertices,
                   std::unique_ptr<const std::vector<unsigned short>> _indices,
                   std::unique_ptr<const std::vector<unsigned char>> _colors) :
            vertices(std::move(_vertices)), indices(std::move(_indices)), colors(std::move(_colors)) {

        if (colors == nullptr) {
            colors = std::make_unique<std::vector<unsigned char>>(vertices->size(), 255);
        }

        glGenVertexArrays(1, &VertexArrayID);
        glBindVertexArray(VertexArrayID);

        glGenBuffers(1, &vertexBuffer);
        glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
        glBufferData(GL_ARRAY_BUFFER, vertices->size() * sizeof(float), &(*vertices)[0], GL_STATIC_DRAW);

        glGenBuffers(1, &elementBuffer);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elementBuffer);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices->size() * sizeof(unsigned short), &(*indices)[0], GL_STATIC_DRAW);

        glGenBuffers(1, &colorBuffer);
        glBindBuffer(GL_ARRAY_BUFFER, colorBuffer);
        glBufferData(GL_ARRAY_BUFFER, colors->size() * sizeof(unsigned char), &(*colors)[0], GL_STATIC_DRAW);

    }

    Mesh::~Mesh() {
        glDeleteBuffers(1, &elementBuffer);
        glDeleteBuffers(1, &vertexBuffer);
        glDeleteVertexArrays(1, &VertexArrayID);
    }

    void Mesh::render() const {

        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elementBuffer);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, nullptr);

        glEnableVertexAttribArray(1);
        glBindBuffer(GL_ARRAY_BUFFER, colorBuffer);
        glVertexAttribPointer(1, 3, GL_UNSIGNED_BYTE, GL_FALSE, 0, nullptr);

        glDrawElements(GL_TRIANGLES, indices->size(), GL_UNSIGNED_SHORT, nullptr);
        glDisableVertexAttribArray(0);

    }

}