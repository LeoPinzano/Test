/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Definition de la classe Mission
 *
 * \author Leo
 * \version 0.1
 * \date   September 2024
 *
 * Programme Cpp permettant de creer des objets pour décrire les missions réalisées durant les stages
 *********************************************************************/

#include "Mission.h"
using namespace std;

/**
Constructeur par defaut
personnes = 1
descriptif = une mission
duree = 1
*/
Mission::Mission()
{
	this->nbPersonne = 1;
	this->descriptifMission = "une mission";
	this->nbHeure = 1;
}

/**
Constructeur avec parametres rentres en argument
personnes = nombre de personnes sur la mission
descriptif = description de la mission
duree = nombre d heures pour realiser la mission
*/
Mission::Mission(int personnes, string descriptif, int duree)
{
	this->nbPersonne = personnes;
	this->descriptifMission = descriptif;
	this->nbHeure = duree;
}

/**
Constructeur de copie
*/
Mission::Mission(const Mission& entre)
{

}