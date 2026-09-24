#include <iostream>
using namespace std;

// Définition d'une classe représentant un cercle.
class CCercle {
private:
    int r; 

public:
    // Constructeur : initialise le rayon avec la valeur donnée.
    CCercle(int rayon) : r(rayon) {}

    // Méthode qui calcule et retourne la surface du cercle.
    // La formule utilisée est : π × r²
    double surface() const {
        return 3.14159 * r * r;
    }
};


int main() {
    // Création d'un objet cercle de rayon 10.
    CCercle c2(10);

    // Affichage de la surface du cercle.
    cout << "Surface du cercle c2 : " << c2.surface() << endl;
    return 0;
}