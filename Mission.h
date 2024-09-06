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

class Mission {
private:
    int nbPersonne;
    std::string descriptifMission;
    int nbHeure;
    Entreprise entrepriseMission;

public:
    // Constructeurs
    Mission();
    Mission(int nbPersonne, std::string descriptifMission, int nbHeure, Entreprise entrepriseMission);

    // Destructeur
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
