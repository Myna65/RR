
#include "Camera.h"

#include <glm/gtc/matrix_transform.hpp>

extern int coucou;

Camera::Camera(glm::vec3 _position, glm::vec3 _target, glm::vec3 _upDirection, float _fov, float _aspectRatio,
               float _nearClipping, float _farClipping) :
position(_position), target(_target), upDirection(_upDirection), fov(_fov), aspectRation(_aspectRatio),
nearClipping(_nearClipping), farClipping(_farClipping)
{}

glm::mat4 Camera::getMatrix() const {
    return
            glm::perspective(fov, aspectRation, nearClipping, farClipping) *
            glm::lookAt(position, target, upDirection);
}
