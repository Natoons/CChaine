// exo9.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "D:\SNIR22\Tounsi Nadir\CChaine.h"

void main()
{
	CChaine ligne1 = "Message 1";
	const CChaine ligne2 = ligne1;
	ligne1 = ligne1; 
	ligne1.show(); 
	ligne2.show();
	cout << "longueurchaine:" << ligne2.getLen() << endl;
}

