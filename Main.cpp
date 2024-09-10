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
    // Test du constructeur par d�faut (Entreprise)
    Entreprise e1;
    std::cout << "Entreprise par d�faut : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    // Test du constructeur avec param�tres (Entreprise)
    Entreprise e2("TechCorp", "Paris");
    std::cout << "Entreprise avec param�tres : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Modification des attributs (Entreprise)
    e2.setEntreprise("InnoTech");
    e2.setVilleEntreprise("Lyon");
    std::cout << "Entreprise modifi�e : " << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << std::endl;

    // Test du constructeur de copie (Entreprise)
    Entreprise e3(e2);
    std::cout << "Entreprise copi�e : " << e3.getNomEntreprise() << ", " << e3.getVilleEntreprise() << std::endl;

    // Test de l'op�rateur d'affectation (Entreprise)
    e1 = e3;
    std::cout << "Entreprise affect�e : " << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << std::endl;

    std::cout << "\n===== Test de la classe Mission =====" << std::endl;

    // Test du constructeur par d�faut (Mission)
    Mission m1;
    std::cout << "Mission par d�faut : " << m1.getNbPersonne() << " personnes, "
        << m1.getDescriptifMission() << ", " << m1.getNbHeure()
        << " heures, Entreprise : " << m1.getEntrepriseMission().getNomEntreprise()
        << ", " << m1.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Test du constructeur avec param�tres (Mission)
    Mission m2(5, "D�velopper un logiciel", 120, e2);
    std::cout << "Mission avec param�tres : " << m2.getNbPersonne() << " personnes, "
        << m2.getDescriptifMission() << ", " << m2.getNbHeure()
        << " heures, Entreprise : " << m2.getEntrepriseMission().getNomEntreprise()
        << ", " << m2.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Modification des attributs (Mission)
    m2.setNbPersonne(10);
    m2.setDescriptifMission("Cr�er une application mobile");
    m2.setNbHeure(200);
    m2.setEntrepriseMission(e1);
    std::cout << "Mission modifi�e : " << m2.getNbPersonne() << " personnes, "
        << m2.getDescriptifMission() << ", " << m2.getNbHeure()
        << " heures, Entreprise : " << m2.getEntrepriseMission().getNomEntreprise()
        << ", " << m2.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Test du constructeur de copie (Mission)
    Mission m3(m2);
    std::cout << "Mission copi�e : " << m3.getNbPersonne() << " personnes, "
        << m3.getDescriptifMission() << ", " << m3.getNbHeure()
        << " heures, Entreprise : " << m3.getEntrepriseMission().getNomEntreprise()
        << ", " << m3.getEntrepriseMission().getVilleEntreprise() << std::endl;

    // Test de l'op�rateur d'affectation (Mission)
    m1 = m3;
    std::cout << "Mission affect�e : " << m1.getNbPersonne() << " personnes, "
        << m1.getDescriptifMission() << ", " << m1.getNbHeure()
        << " heures, Entreprise : " << m1.getEntrepriseMission().getNomEntreprise()
        << ", " << m1.getEntrepriseMission().getVilleEntreprise() << std::endl;

    return 0;
}
