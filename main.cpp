#include "tp2.h"
#include <iostream>

int main(int argc, char const *argv[]) {

    Date WW2(1945, 6, 12);
    std::cout << "WW2: " <<WW2.year() << "/" <<WW2.month() << "/" << WW2.day() << std::endl;

    Client Ronaldo(777, "Cristiano", "Ronaldo");
    std::cout << "The Goat is :" << Ronaldo.id() << " - " << Ronaldo.nom() << " - " << Ronaldo.prenom() << std::endl;

    Chambre Chambre1(318, "double", 292.00);
    std::cout << "chambre du goat :" << Chambre1.numero() << " - " << Chambre1.type() << " - " << Chambre1.prix() << " $" << std::endl;
    

    Hotel GoldenExperience(101, "Giorno", "Napoli", 100);
    GoldenExperience.ajouterChambre();
    std::cout << GoldenExperience.nb_chambre() << std::endl;
    GoldenExperience.supprimerChambre();
    std::cout << GoldenExperience.nb_chambre() << std::endl;
    return 0;
}