/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Definition de la classe Mission
 *
 * \author Leo
 * \version 0.1
 * \date   September 2024
 *
 * Programme Cpp permettant de creer des objets pour décrire les mission des stages
 *********************************************************************/

#include "mission.h"

 // Constructeurs
Mission::Mission() : nbPersonne(0), descriptifMission(""), nbHeure(0), entrepriseMission() {}

Mission::Mission(int nbPersonne, std::string descriptifMission, int nbHeure, Entreprise entrepriseMission)
    : nbPersonne(nbPersonne), descriptifMission(descriptifMission), nbHeure(nbHeure), entrepriseMission(entrepriseMission) {}

// Destructeur
Mission::~Mission() {}

// Getters
int Mission::getNbPersonne() const {
    return nbPersonne;
}

std::string Mission::getDescriptifMission() const {
    return descriptifMission;
}

int Mission::getNbHeure() const {
    return nbHeure;
}

Entreprise Mission::getEntrepriseMission() const {
    return entrepriseMission;
}

// Setters
void Mission::setNbPersonne(int nbPersonne) {
    this->nbPersonne = nbPersonne;
}

void Mission::setDescriptifMission(std::string descriptifMission) {
    this->descriptifMission = descriptifMission;
}

void Mission::setNbHeure(int nbHeure) {
    this->nbHeure = nbHeure;
}

void Mission::setEntrepriseMission(Entreprise entrepriseMission) {
    this->entrepriseMission = entrepriseMission;
}
