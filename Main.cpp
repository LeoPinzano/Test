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
    // Test du constructeur par d�faut
    Entreprise e1;
    std::cout << "Entreprise par d�faut : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    // Test du constructeur avec param�tres
    Entreprise e2("TechCorp", "Paris");
    std::cout << "Entreprise avec param�tres : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Modification des attributs
    e2.setEntreprise("InnoTech");
    e2.setVilleEntreprise("Lyon");
    std::cout << "Entreprise modifi�e : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Test du constructeur de copie
    Entreprise e3(e2);
    std::cout << "Entreprise copi�e : " << e3.getNomEntreprise() << ", " << e3.getVilleEntreprise() << std::endl;

    // Test de l'op�rateur d'affectation
    e1 = e3;
    std::cout << "Entreprise affect�e : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    return 0;
}
