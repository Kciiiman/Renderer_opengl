#version 330 core
out vec4 FragColor;

in vec3 TexCoords;
//�����λ����Ϣ��Ϊ��������
uniform samplerCube skybox;

void main()
{    
    FragColor = texture(skybox, TexCoords);
}