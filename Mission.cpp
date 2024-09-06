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

 /**
  * \brief Constructeur par défaut de la classe Mission.
  *
  * Initialise une mission avec :
  * - nbPersonne = 0
  * - descriptifMission = ""
  * - nbHeure = 0
  * - entrepriseMission = Entreprise par défaut
  */
Mission::Mission() : nbPersonne(0), descriptifMission(""), nbHeure(0), entrepriseMission() {}

/**
 * \brief Constructeur avec paramètres.
 *
 * \param nbPersonne Nombre de personnes assignées à la mission.
 * \param descriptifMission Description de la mission.
 * \param nbHeure Nombre d'heures nécessaires pour la mission.
 * \param entrepriseMission Entreprise associée à la mission.
 */
Mission::Mission(int nbPersonne, std::string descriptifMission, int nbHeure, Entreprise entrepriseMission)
    : nbPersonne(nbPersonne), descriptifMission(descriptifMission), nbHeure(nbHeure), entrepriseMission(entrepriseMission) {}

/**
 * \brief Destructeur de la classe Mission.
 *
 * Aucune action particulière à la destruction.
 */
Mission::~Mission() {}

// Getters

/**
 * \brief Récupère le nombre de personnes assignées à la mission.
 *
 * \return Le nombre de personnes assignées à la mission.
 */
int Mission::getNbPersonne() const {
    return nbPersonne;
}

/**
 * \brief Récupère la description de la mission.
 *
 * \return Le descriptif de la mission.
 */
std::string Mission::getDescriptifMission() const {
    return descriptifMission;
}

/**
 * \brief Récupère le nombre d'heures nécessaires pour la mission.
 *
 * \return Le nombre d'heures nécessaires pour accomplir la mission.
 */
int Mission::getNbHeure() const {
    return nbHeure;
}

/**
 * \brief Récupère l'entreprise associée à la mission.
 *
 * \return L'entreprise liée à la mission.
 */
Entreprise Mission::getEntrepriseMission() const {
    return entrepriseMission;
}

// Setters

/**
 * \brief Définit le nombre de personnes assignées à la mission.
 *
 * \param nbPersonne Nouveau nombre de personnes assignées à la mission.
 */
void Mission::setNbPersonne(int nbPersonne) {
    this->nbPersonne = nbPersonne;
}

/**
 * \brief Définit le descriptif de la mission.
 *
 * \param descriptifMission Nouveau descriptif de la mission.
 */
void Mission::setDescriptifMission(std::string descriptifMission) {
    this->descriptifMission = descriptifMission;
}

/**
 * \brief Définit le nombre d'heures nécessaires pour accomplir la mission.
 *
 * \param nbHeure Nouveau nombre d'heures nécessaires pour la mission.
 */
void Mission::setNbHeure(int nbHeure) {
    this->nbHeure = nbHeure;
}

/**
 * \brief Initialise l'entreprise liee a la mission.
 * 
 * \param entrepriseMission
 */
void Mission::setEntrepriseMission(Entreprise entrepriseMission) {
    this->entrepriseMission = entrepriseMission;
}
