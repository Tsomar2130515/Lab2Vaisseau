#include "Station.h"
#include "Factory.h"
#pragma once
#include <string>

Station:: Station(int platinumDisponible, int vieStation, vector<Vaisseau*> vecVaisseau)
{
	this->platinumDiponible = platinumDisponible;
	this->vieStation= vieStation;
	this->vieStation = vieStation;
	this-> vecVaisseau= vecVaisseau;

}


Station::~Station() {}



void Station::Init()
{
	for(int i = 0 ; i < 3 ; i++)
	{
		vecVaisseau.push_back(Factory::getRandomVaisseau());

	}

}


 vector<Vaisseau*> Station::getVaisseauDispo()
 {
	 return vecVaisseau;
 }

 void Station::AfficherVaisseauDispo(vector<Vaisseau*> vecVaisseau)
 {
	 for (int i = 0; i < 3; i++)
	 {
		  cout << vecVaisseau[i]->to_string();

	 }

 }

 void Station::AjouterVaisseau(Vaisseau* vaiss)
 {
	 vecVaisseau.push_back(vaiss);
	 

 }

 



