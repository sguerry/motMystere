/*
 * mot.h
 *
 *  Created on: 4 févr. 2019
 *      Author: sguerry
 */

#ifndef MOT_H_INCLUDED
#define MOT_H_INCLUDED

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string saisieMotMystere();
string melangeLeMot(string mot);
bool valideLeMot(string mot, string motMelange);


#endif // MOT_H_INCLUDED

