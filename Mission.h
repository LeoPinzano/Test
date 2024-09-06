/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe mission
 *
 * \author Leo
 * \date   September 2024
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H

#include <string>
#include "entreprise.h"

 /*! \class Mission
  *  \brief Classe représentant une mission.
  *
  * Cette classe gère les missions liées à une entreprise, incluant le nombre de personnes,
  * la description de la mission, le nombre d'heures nécessaires, et l'entreprise associée à la mission.
  */
class Mission {
private:
    /**
     * Nombre de personnes assignées à la mission.
     */
    int nbPersonne;
    /**
     * Description détaillée de la mission.
     */
    std::string descriptifMission;
    /**
     * Nombre d'heures requises pour compléter la mission.
     */
    int nbHeure;
    /**
     * Entreprise associée à la mission.
     */
    Entreprise entrepriseMission;

public:
    Mission();
    Mission(int nbPersonne, std::string descriptifMission, int nbHeure, Entreprise entrepriseMission);
    ~Mission();

    // Getters

    int getNbPersonne() const;
    std::string getDescriptifMission() const;
    int getNbHeure() const;
    Entreprise getEntrepriseMission() const;

    // Setters

    void setNbPersonne(int nbPersonne);
    void setDescriptifMission(std::string descriptifMission);
    void setNbHeure(int nbHeure);
    void setEntrepriseMission(Entreprise entrepriseMission);
};

#endif // MISSION_H
