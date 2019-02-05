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
    string  leMot, leMotMelange, response;
    // Melange du mot
    leMot = saisieMotMystere();
    cout << leMot << endl;
    // init aleatoire
    leMotMelange= melangeLeMot(leMot);
    cout << "le mot melange est :" << leMotMelange << endl;
    // poser la question
    if (valideLeMot(leMot, leMotMelange)==true)
        cout << "Gagne!" << endl;
    return 0;
}


