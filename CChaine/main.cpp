// CChaine.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "CChaine.h"

using namespace std;
void main()
{
    /*cout << "Test classe chaine" << endl;
    CChaine mot = "Programme Test";
    mot.show();
    mot.upper();
    mot.show();
    cout << "longueurchaine:" << mot.getLen() << endl;
    cout << endl << endl;*/
    CChaine chaine1 = "Chaine1\n";
    CChaine chaine2 = chaine1;
    chaine1.show(); chaine2.show();
    chaine2.upper();
    chaine2.show(); chaine1.show();
    CChaine ligne;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
