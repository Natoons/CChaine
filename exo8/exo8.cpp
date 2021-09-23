// exo8.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "D:\SNIR22\Tounsi Nadir\CChaine.h"

void main()
{
	CChaine mot = "Programme de test";
	CChaine mot2 = "la suite du message …";
	CChaine mot3 = "la suite de la suite du message …";
	CChaine mot4;
	mot4 = mot = mot2 = mot3;
	mot4.show(); mot.show(); mot2.show();
	cout << "longueurchaine:" << mot4.getLen() << endl;
}

