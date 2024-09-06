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
  *  \brief Classe repr�sentant une mission.
  *
  * Cette classe g�re les missions li�es � une entreprise, incluant le nombre de personnes,
  * la description de la mission, le nombre d'heures n�cessaires, et l'entreprise associ�e � la mission.
  */
class Mission {
private:
    /**
     * Nombre de personnes assign�es � la mission.
     */
    int nbPersonne;
    /**
     * Description d�taill�e de la mission.
     */
    std::string descriptifMission;
    /**
     * Nombre d'heures requises pour compl�ter la mission.
     */
    int nbHeure;
    /**
     * Entreprise associ�e � la mission.
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
