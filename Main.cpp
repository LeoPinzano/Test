/*****************************************************************//**
 * \file   Main.cpp
 * \brief  
 * 
 * \author Leo
 * \date   September 2024
 *********************************************************************/

#include "Entreprise.h"
#include <iostream>

int main() {
    // Test du constructeur par défaut
    Entreprise e1;
    std::cout << "Entreprise par défaut : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    // Test du constructeur avec paramètres
    Entreprise e2("TechCorp", "Paris");
    std::cout << "Entreprise avec paramètres : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Modification des attributs
    e2.setEntreprise("InnoTech");
    e2.setVilleEntreprise("Lyon");
    std::cout << "Entreprise modifiée : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Test du constructeur de copie
    Entreprise e3(e2);
    std::cout << "Entreprise copiée : " << e3.getNomEntreprise() << ", " << e3.getVilleEntreprise() << std::endl;

    // Test de l'opérateur d'affectation
    e1 = e3;
    std::cout << "Entreprise affectée : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    return 0;
}
