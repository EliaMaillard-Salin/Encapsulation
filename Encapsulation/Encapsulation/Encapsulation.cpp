// Encapsulation.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "test.h"
#include "Integer.h"
#include "Entities.h"
#include "World.h"

#define SDL_MAIN_HANDLED
#include <SDL.h>

int main()
{

	// Pointers to our window and surface
	SDL_Surface* winSurface = NULL;
	SDL_Window* window = NULL;

	// Initialize SDL. SDL_Init will return -1 if it fails.
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		std::cout << "Error initializing SDL: " << SDL_GetError() << std::endl;
		system("pause");
		// End the program
		return 1;
	}

	//int a = 0; 
	//Integer b = Integer(3);
	//Integer testa = Integer(5);
	//Integer testc = Integer(10);
	//std::cout << b + 3 << std::endl;
	//std::cout << testa + testc << std::endl;
	//std::cout << testa * 2 << std::endl;
	//std::cout << testc / testa << std::endl;
	//std::cout << testc % b << std::endl;

	//Vector2 vect = Vector2();
	//Vector2 add = Vector2();

	//Vector2 result = vect + add;
	//result *= 2;
	//result += vect;


	//World world = World();
	//world.Init();
	//while (world.HasEnded() == false)
	//	world.Step();
	//std::cout << "Simulation Finished !";
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
