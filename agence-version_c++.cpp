

#include <iostream>
#include <ctime>
#include "VaisseauTransport.h"
#include "VaisseauGuerre.h"
#include "VaisseauLivraison.h"
#include "Vaisseau.h"
#include "Factory.h"
#include "Station.h"
using namespace std;


int main()
{
    srand(time(NULL));
    cout << "... Production d'un Vaisseau" << ::endl;
    Vaisseau* monVaisseau = Factory::getRandomVaisseau();
     cout <<  monVaisseau->to_string() ;

     delete monVaisseau;
     vector <Vaisseau*> monVecteur;
     Station maStation(10,15,monVecteur);
     maStation.Init();
     
     maStation.AfficherVaisseauDispo(maStation.getVaisseauDispo());
     maStation.AjouterVaisseau(monVaisseau);

     

    
}
