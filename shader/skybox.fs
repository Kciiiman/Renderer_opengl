#version 330 core
out vec4 FragColor;

in vec3 TexCoords;
//输入的位置信息作为纹理坐标
uniform samplerCube skybox;

void main()
{    
    FragColor = texture(skybox, TexCoords);
}