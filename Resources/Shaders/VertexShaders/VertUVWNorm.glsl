#version 430 core

layout(location = 0) in vec3 inVertPos;
layout(location = 1) in vec3 inNorm;
layout(location = 2) in vec2 inTexturePos;

uniform mat4 mModelMatrix;
uniform mat4 mViewMatrix;
uniform mat4 mProjectionMatrix;

out vec2 outVertColor;

void main()
{
    outVertColor = inTexturePos;
    gl_Position = mProjectionMatrix * mViewMatrix * mModelMatrix * vec4(inVertPos, 1.0f);
}