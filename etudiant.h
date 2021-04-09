#include "personne.h"
class Etudiant: public Personne
{
private:
    string mat, classe;
    float moy;
public:
    Etudiant();
    Etudiant(string, string, string, int, string,string, float);
    ~Etudiant();
    void setMat(string);
    void setClasse(string);
    void setMoy(float);

    string getMat();
    string getClasse();
    float getMoy();

    void affiche();
    void saisie();
};
