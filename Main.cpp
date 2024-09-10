/*****************************************************************//**
 * \file   Main.cpp
 * \brief
 *
 * \author Leo
 * \date   September 2024
 *********************************************************************/

#include "Entreprise.h"
#include "Mission.h"
#include <iostream>

int main() {
    // Test du constructeur par défaut (Entreprise)
    Entreprise e1;
    std::cout << "Entreprise par défaut : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    // Test du constructeur avec paramètres (Entreprise)
    Entreprise e2("TechCorp", "Paris");
    std::cout << "Entreprise avec paramètres : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Modification des attributs (Entreprise)
    e2.setEntreprise("InnoTech");
    e2.setVilleEntreprise("Lyon");
    std::cout << "Entreprise modifiée : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Test du constructeur de copie (Entreprise)
    Entreprise e3(e2);
    std::cout << "Entreprise copiée : " << e3.getNomEntreprise() << ", " << e3.getVilleEntreprise() << std::endl;

    // Test de l'opérateur d'affectation (Entreprise)
    e1 = e3;
    std::cout << "Entreprise affectée : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    std::cout << "\n===== Test de la classe Mission =====" << std::endl;

    // Test du constructeur par défaut (Mission)
    Mission m1;
    std::cout << "Mission par défaut : " << m1.getNbPersonne() << " personnes, "
        << m1.getDescriptifMission() << ", " << m1.getNbHeure()
        << " heures, Entreprise : " << m1.getEntrepriseMission().getNomEntreprise()
        << ", " << m1.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Test du constructeur avec paramètres (Mission)
    Mission m2(5, "Développer un logiciel", 120, e2);
    std::cout << "Mission avec paramètres : " << m2.getNbPersonne() << " personnes, "
        << m2.getDescriptifMission() << ", " << m2.getNbHeure()
        << " heures, Entreprise : " << m2.getEntrepriseMission().getNomEntreprise()
        << ", " << m2.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Modification des attributs (Mission)
    m2.setNbPersonne(10);
    m2.setDescriptifMission("Créer une application mobile");
    m2.setNbHeure(200);
    m2.setEntrepriseMission(e1);
    std::cout << "Mission modifiée : " << m2.getNbPersonne() << " personnes, "
        << m2.getDescriptifMission() << ", " << m2.getNbHeure()
        << " heures, Entreprise : " << m2.getEntrepriseMission().getNomEntreprise()
        << ", " << m2.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Test du constructeur de copie (Mission)
    Mission m3(m2);
    std::cout << "Mission copiée : " << m3.getNbPersonne() << " personnes, "
        << m3.getDescriptifMission() << ", " << m3.getNbHeure()
        << " heures, Entreprise : " << m3.getEntrepriseMission().getNomEntreprise()
        << ", " << m3.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Test de l'opérateur d'affectation (Mission)
    m1 = m3;
    std::cout << "Mission affectée : " << m1.getNbPersonne() << " personnes, "
        << m1.getDescriptifMission() << ", " << m1.getNbHeure()
        << " heures, Entreprise : " << m1.getEntrepriseMission().getNomEntreprise()
        << ", " << m1.getEntrepriseMission().getVilleEntreprise() << std::endl;

    return 0;
}
