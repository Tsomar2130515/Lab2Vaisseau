
#pragma once
#include <string>
#include "Vaisseau.h"
 #include <vector>;
using std::vector;
class Station
{
private:
    int platinumDiponible;
    int vieStation;
    vector <Vaisseau*> vecVaisseau;

public:
    Station(int platinumDisponible,int vieStation,vector<Vaisseau*> vecVaisseau);

    ~Station();

    vector <Vaisseau*> getVaisseauDispo();

     void  Init() ;
     void  AfficherVaisseauDispo(vector<Vaisseau*> vecVaisseau) ;

     void  AjouterVaisseau(Vaisseau* vaisseau) ;

    
};



