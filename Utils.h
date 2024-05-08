#include <string>
#include <vector>
class Shader;
unsigned int loadTexture(const char* path);
unsigned int loadCubemap(std::vector<std::string> faces);

void renderCube();
void renderQuad();