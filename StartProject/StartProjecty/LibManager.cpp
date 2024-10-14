#include "LibManager.h"
#include "pch.h"

#include "Shapes.h"

LibManager::LibManager(LibType choosenLib) : m_choosenLib(choosenLib), m_backgroundColor(COLOR(255,255,255,255))
{
	init_window(choosenLib);
	init_sprite_manager(choosenLib);
	init_time_manager(choosenLib);
}

void LibManager::init_window(LibType choosenLib)
{
	if (choosenLib == SDL)
	{
		if (SDL_Init(SDL_INIT_VIDEO) < 0)
		{
			std::cout << "Failed to initialize the SDL2 library\n";
		}

		SDL_Window* window = SDL_CreateWindow("SDL2 Window",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			680, 480,
			0);

		if (!window)
		{
			std::cout << "Failed to create window\n";
		}


		m_renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC); // Création du renderer

		if (m_renderer == NULL)//gestion des erreurs
		{
			printf("Erreur lors de la creation d'un renderer : %s", SDL_GetError());
		}
	}
	else if (choosenLib == RAYLIB)
	{
		InitWindow(500, 500, "aaa");
	}
}

void LibManager::init_sprite_manager(LibType choosenLib)
{
	if (choosenLib == SDL)
	{

	}
	else if (choosenLib == RAYLIB)
	{

	}
}

void LibManager::init_time_manager(LibType choosenLib)
{
	if (choosenLib == SDL)
	{

	}
	else if (choosenLib == RAYLIB)
	{

	}
}

void LibManager::SetBackgroundColor(COLOR color)
{
	m_backgroundColor = color;
}


void LibManager::StartDrawingMode()
{
	if (m_choosenLib == SDL)
	{
		SDL_SetRenderDrawColor(m_renderer, m_backgroundColor.m_r, m_backgroundColor.m_g, m_backgroundColor.m_b, m_backgroundColor.m_a);
		SDL_RenderClear(m_renderer);
		SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);

	}
	else if (m_choosenLib == RAYLIB)
	{
		ClearBackground(m_backgroundColor.ToRaylibColor());
		BeginDrawing();
	}
}

void LibManager::EndDrawingMode()
{
	if (m_choosenLib == SDL)
	{
		SDL_RenderPresent(m_renderer);
	}
	else if (m_choosenLib == RAYLIB)
	{
		EndDrawing();
	}
}

void LibManager::CustomDrawRectangle(CustomRectangle* pRectangle)
{
	if (m_choosenLib == SDL)
	{
		SDL_RenderDrawRect(m_renderer, pRectangle->ToSDLRect());
	}
	else if (m_choosenLib == RAYLIB)
	{
		DrawRectangle(pRectangle->m_position.m_x, pRectangle->m_position.m_y, pRectangle->m_w, pRectangle->m_h, Color(pRectangle->m_color.ToRaylibColor()));
	}
}

void LibManager::CustomDrawCircle(CustomCircle* pCircle)
{
	if (m_choosenLib == SDL)
	{
		//
	}
	else if (m_choosenLib == RAYLIB)
	{
		DrawCircle(pCircle->m_position.m_x, pCircle->m_position.m_y, pCircle->m_radius, pCircle->m_color.ToRaylibColor() );
	}
}

void LibManager::StartFrame()
{
	if (m_choosenLib == SDL)
	{
		m_startframe = SDL_GetTicks();
		m_deltaTime = m_startframe - m_endframe;
		m_fps = 1000 / m_deltaTime;
	}
}
