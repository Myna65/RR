#include "Scene.h"

#include <vector>
#include <memory>

#include <glm/glm.hpp>

#include "Mesh.h"
#include "MeshConverter.h"
#include "../loaders/wad/WadFile.h"
#include "../loaders/mesh/lwo/LwoLoader.h"
#include "ResourceManager.h"

Scene::Scene(const Program &_program, const Camera &_camera) :
    program(_program), camera(_camera) {

    std::vector<float> vertices{
            -1.0f, -1.0f, 0.0f,
            1.0f, -1.0f, 0.0f,
            0.0f,  1.0f, 0.0f,
    };

    RR::OpenGL::ResourceManager resourceManager;

    mesh = resourceManager.loadMesh<LwoLoader>("Vehicles\\LargeHeli\\LPH_heli2.lwo");

    resourceManager.close();

}

void Scene::render() {
    program.useProgram();

    auto cameraMatrix = camera.getMatrix();

    auto Model = glm::mat4(1.0f);
    auto mvp = cameraMatrix * Model;


    GLuint MatrixID = program.getUniformLocation("MVP");
    glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &mvp[0][0]);

    mesh->render();

}