/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Definition de la classe Mission
 *
 * \author Leo
 * \version 0.1
 * \date   September 2024
 *
 * Programme Cpp permettant de creer des objets pour d�crire les mission des stages
 *********************************************************************/

#include "mission.h"

 /**
  * \brief Constructeur par d�faut de la classe Mission.
  *
  * Initialise une mission avec :
  * - nbPersonne = 0
  * - descriptifMission = ""
  * - nbHeure = 0
  * - entrepriseMission = Entreprise par d�faut
  */
Mission::Mission() : nbPersonne(0), descriptifMission(""), nbHeure(0), entrepriseMission() {}

/**
 * \brief Constructeur avec param�tres.
 *
 * \param nbPersonne Nombre de personnes assign�es � la mission.
 * \param descriptifMission Description de la mission.
 * \param nbHeure Nombre d'heures n�cessaires pour la mission.
 * \param entrepriseMission Entreprise associ�e � la mission.
 */
Mission::Mission(int nbPersonne, std::string descriptifMission, int nbHeure, Entreprise entrepriseMission)
    : nbPersonne(nbPersonne), descriptifMission(descriptifMission), nbHeure(nbHeure), entrepriseMission(entrepriseMission) {}

/**
 * \brief Destructeur de la classe Mission.
 *
 * Aucune action particuli�re � la destruction.
 */
Mission::~Mission() {}

// Getters

/**
 * \brief R�cup�re le nombre de personnes assign�es � la mission.
 *
 * \return Le nombre de personnes assign�es � la mission.
 */
int Mission::getNbPersonne() const {
    return nbPersonne;
}

/**
 * \brief R�cup�re la description de la mission.
 *
 * \return Le descriptif de la mission.
 */
std::string Mission::getDescriptifMission() const {
    return descriptifMission;
}

/**
 * \brief R�cup�re le nombre d'heures n�cessaires pour la mission.
 *
 * \return Le nombre d'heures n�cessaires pour accomplir la mission.
 */
int Mission::getNbHeure() const {
    return nbHeure;
}

/**
 * \brief R�cup�re l'entreprise associ�e � la mission.
 *
 * \return L'entreprise li�e � la mission.
 */
Entreprise Mission::getEntrepriseMission() const {
    return entrepriseMission;
}

// Setters

/**
 * \brief D�finit le nombre de personnes assign�es � la mission.
 *
 * \param nbPersonne Nouveau nombre de personnes assign�es � la mission.
 */
void Mission::setNbPersonne(int nbPersonne) {
    this->nbPersonne = nbPersonne;
}

/**
 * \brief D�finit le descriptif de la mission.
 *
 * \param descriptifMission Nouveau descriptif de la mission.
 */
void Mission::setDescriptifMission(std::string descriptifMission) {
    this->descriptifMission = descriptifMission;
}

/**
 * \brief D�finit le nombre d'heures n�cessaires pour accomplir la mission.
 *
 * \param nbHeure Nouveau nombre d'heures n�cessaires pour la mission.
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
