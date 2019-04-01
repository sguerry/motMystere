/*
 * main.cpp
 *
 *  Created on: 4 févr. 2019
 *      Author: sguerry
 */


#include <iostream>
#include <string>
#include "mot.h"
using namespace std;

int main()
{
    //Declaration de variables
	const string monFichier("C:/Users/sguerry/eclipse-workspace/Cpp/motMystere/src/dico.txt");
    string  leMot, leMotMelange, response;
    string encore = "n";
    int test=0;
     test = dictionnaire(monFichier);

    do {
		// Etape 1 : Melange du mot
		leMot = saisieMotMystere();
		//cout << leMot << endl;
		// init aleatoire
		leMotMelange= melangeLeMot(leMot);

		// Etape 2: Trouver le mot mystere
		cout << "le mot melange est :" << leMotMelange << endl;
		// poser la question
		if (valideLeMot(leMot, leMotMelange)==true)
			cout << "Gagne!" << endl;
		else
			cout << "Perdu!" << endl;
		// Etape 3 : Demander pour une autre partie
	   cout << "Voulez-vous faire une autre partie? (o/n)" << endl;
	   cin >> encore;
	   cout << encore << endl;
    }
    while (encore.compare("n") && encore.compare("N"));
    return 0;
}


