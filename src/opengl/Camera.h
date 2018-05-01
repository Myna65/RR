#ifndef OPENGL_CAMERA_H
#define OPENGL_CAMERA_H


#include <glm/vec3.hpp>
#include <glm/detail/type_mat.hpp>

class Camera {

private:
    glm::vec3 position;
    glm::vec3 target;
    glm::vec3 upDirection;
    float fov;
    float aspectRation;
    float nearClipping;
    float farClipping;

public:
    Camera(glm::vec3 position, glm::vec3 target, glm::vec3 upDirection, float fov, float aspectRatio, float nearClipping, float farClipping);
    glm::mat4 getMatrix() const;
};


#endif //OPENGL_CAMERA_H
