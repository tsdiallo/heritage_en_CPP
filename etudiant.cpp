#include "etudiant.h"

Etudiant::Etudiant()
{
    this -> mat= "";
    this -> classe= "";
    this -> moy= 0;
}
Etudiant::Etudiant(string nom, string prenom, string adresse, int age, string mat, string classe, float moy):Personne(nom, prenom, adresse, age)
{
    this -> mat=mat;
    this -> classe= classe;
    this -> moy= moy;
}
Etudiant::~Etudiant()
{
    if(!mat.empty())
        mat.erase();
    if(!classe.empty())
        classe.erase();
    if(!moy!=0)
        moy=0;
}
void Etudiant::setMat(string mat)
{
    this -> mat=mat;
}
void Etudiant::setClasse(string classe)
{
    this -> classe=classe;
}
void Etudiant::setMoy(float moy)
{
    this -> moy=moy;
}


string Etudiant::getMat()
{
    return mat;
}
string Etudiant::getClasse()
{
    return classe;
}
float Etudiant::getMoy()
{
    return moy;
}

void Etudiant::saisie()
{
    Personne::saisie();
    cout<<"Entrer le matricule :" ;
    cin>>mat;

    cout<<"Entrer la classe :" ;
    cin>>classe;

     cout<<"Entrer la moyenne :" ;
    cin>>moy;
}
void Etudiant::affiche()
{
    Personne::affiche();
    cout<<"Le matricule de l'etudiant est : "<< mat <<endl;
    cout<<"La classe de l'etudiant est : "<< classe <<endl;
    cout<<"La moyenne de l'etudiant  est : "<< moy <<endl;
}
