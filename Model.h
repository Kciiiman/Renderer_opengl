#pragma once
#include "assimp/Importer.hpp"
#include "assimp/postprocess.h"
#include "assimp/scene.h"
#include "Mesh.h"
#include "stb_image.h"

inline unsigned int TextureFromFile(const char* path, const std::string& directory, bool gamma = false);
class Model
{
public:
    std::vector<Mesh> meshes;
    std::string directory;
    std::vector<Texture> textures_loaded;

    Model(std::string const& path, bool gamma = false);
    void Draw(Shader &shader);
private:
    void loadModel(std::string path);
    void processNode(aiNode* node, const aiScene* scene);
    Mesh processMesh(aiMesh* mesh, const aiScene* scene);
    std::vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type,
        std::string typeName);
};

