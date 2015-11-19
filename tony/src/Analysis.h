#include "Mesh.h"

class Analysis : public Mesh
{
public:

    Analysis(const Mesh &_surface);

    void draw(Shader *shader, bool drawEdges = false);


    int getNbFaces();
    int getNbVertices();

    int getNbHoles() const;
    int getNbConnectedComponent() const;

private:
    const Mesh &mesh;

    int nbVertices;
    int nbFaces;

    int nbHoles;
    int nbConnectedComponents;

    std::vector<Eigen::Vector3i> mIndicesEdges;


}
