/*
 * mot.cpp
 *
 *  Created on: 4 f�vr. 2019
 *      Author: sguerry
 */

#include "mot.h"

string saisieMotMystere(){
    // Saisie du mot mystere
    string leMot;
    cout << "Veuillez saisir le mot mystere :" << endl;
    cin >> leMot;
    return leMot;
}

string melangeLeMot(string mot){
    int position(0);
    string leMotMelange;
    //init al�atoire
    srand(time(0));
    //Remplissage du mot melange

    while (mot.size()!=0)
    {
        position = rand () % mot.size();

        leMotMelange += mot[position];
        mot.erase(position,1);
        cout << mot << " " << leMotMelange << endl;
    }

    return leMotMelange;
}

bool valideLeMot(string mot, string motMelange){
	string response;

    int nbEssai=5;
    do{
        cout << "le mot melange est :" << motMelange << endl;
        cout << "Vous avez " << nbEssai << endl;
        cout << "Quel est le mot ?" << endl;
        cin >> response;

        nbEssai--;
    }
    while (response != mot && nbEssai != 0 );

    if (response == mot)
    	return true;
    else
    	return false;
}

int dictionnaire(string monFichier)
{
     ifstream fichier(monFichier);

	   if(fichier)
	   {
	      //L'ouverture s'est bien pass�e, on peut donc lire

	      string ligne; //Une variable pour stocker les lignes lues

	      while(getline(fichier, ligne)) //Tant qu'on n'est pas � la fin, on lit
	      {
	         cout << ligne << endl;
	         //Et on l'affiche dans la console
	         //Ou alors on fait quelque chose avec cette ligne
	         //� vous de voir
	      }
	   }
	   else
	   {
	      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	   }
	   return 0;
}
