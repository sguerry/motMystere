/*
 * mot.cpp
 *
 *  Created on: 4 févr. 2019
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
    //init aléatoire
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
    do{
        cout << "le mot melange est :" << motMelange << endl;
        cout << "Quel est le mot ?" << endl;
        cin >> response;
    }
    while (response != mot);
    return true;
}
