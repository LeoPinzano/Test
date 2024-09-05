/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe mission
 *
 * \author Leo
 * \date   September 2024
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

class Mission
{
private:
	/**
	Membre prive nbPersonne : contient les nombre de personne sur la mission
	*/
	std::int nbPersonne;
	/**
	Membre prive descriptifMission : contient une description de la mission
	*/
	std::string descriptifMission;
	/**
	Membre prive nbHeure : contient le temps utilise pour realise la mission (en heure)
	*/
	std::int nbHeure;

protected:


public:
	Mission();
	~Mission();
	Mission(const Mission& entre);
	Mission&
};
#endif // !MISSION_H
