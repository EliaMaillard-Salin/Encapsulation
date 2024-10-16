// SDL_RAYLIB_TEST.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <raylib.h>
#include "Vectors.h"

int main()
{

    Vector2 vect{ 1.f,2.5f };
    VECT2 VECT = VECT2().RaylibVectToVECT2(vect);
    std::cout << VECT;

    std::cout << "Hello World!\n";

    Color pixelColor = Color{255,0,0,255};

    InitWindow(500, 500, "COINC");

    BeginDrawing();

    DrawPixel(5, 10, pixelColor);
    EndDrawing();
    while(true){}
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
