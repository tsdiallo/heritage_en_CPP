#include <iostream>

using namespace std;

class Personne{
protected:
    string nom, prenom, adresse;
    int age;
public:
    Personne();
    Personne(string, string, string, int);
    ~Personne();
    void setNom(string);
    void setPrenom(string);
    void setAdresse(string);
    void setAge(int);
    string getNom();
    string getPrenom();
    string getAdresse();
    int getAge();

    void affiche();
    void saisie();


};
