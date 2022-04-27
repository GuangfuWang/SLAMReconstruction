#version 430 core
in vec4 outVertColor;
out vec4 FragColor;
void main()
{
    FragColor = outVertColor;
}