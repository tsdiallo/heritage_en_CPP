#include"personne.h"
Personne::Personne()
{
    this -> nom="";
    this -> prenom="";
    this -> adresse="";
    this -> age=0;

}
Personne::Personne(string nom, string prenom,string adresse, int age)
{
    this -> nom=nom;
    this -> prenom=prenom;
    this -> adresse=adresse;
    this -> age=age;

}
Personne::~Personne()
{
    if (!nom.empty())
        nom.erase();
    if (!prenom.empty())
        prenom.erase();
    if (!adresse.empty())
        adresse.erase();
    if (age!=0)
        age=0;
}
void Personne::setNom (string nom)
{
    this-> nom=nom;
}
void Personne::setPrenom (string prenom)
{
    this-> prenom=prenom;
}

void Personne::setAdresse (string adresse)
{
    this-> adresse=adresse;
}

void Personne:: setAge(int age)
{
    this-> age=age;
}
string Personne:: getNom()
{
    return nom;
}
string Personne:: getPrenom()
{
    return prenom;
}
string Personne:: getAdresse()
{
    return adresse;
}
int Personne:: getAge()
{
    return age;
}
void Personne:: saisie()
{
    cout<<"Entrer le nom de la personne :";
    cin>>nom;
     cout<<"Entrer le prenom de la personne :";
    cin>>prenom;
     cout<<"Entrer l'adresse de la personne :";
    cin>>adresse;
     cout<<"Entrer l'age de la personne :";
    cin>>age;
}
void Personne::affiche()
{
    cout<<"le nom de la personne est :"<< nom <<endl;
    cout<<"le prenom de la personne est :"<< prenom <<endl;
    cout<<"l'adresse de la personne est :"<< adresse <<endl;
    cout<<"l'age de la personne est :"<< age <<endl;
}
