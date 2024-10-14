#ifndef LIBMANAGER__H_
#define LIBMANAGER__H_

#include "Colors.h"

class CustomRectangle;

class CustomCircle;

struct SDL_Renderer;

enum LibType
{
	SDL,
	RAYLIB
};

class LibManager
{
public:

	LibManager(LibType choosenLib);

	void init_window(LibType choosenLib);
	void init_sprite_manager(LibType choosenLib);
	void init_time_manager(LibType choosenLib);

	void SetBackgroundColor(COLOR color);

	void StartDrawingMode();
	void EndDrawingMode();

	void DrawText();

	void CustomDrawRectangle(CustomRectangle* pRenctangle);
	void CustomDrawCircle(CustomCircle* pRenctangle);

	void StartFrame();
	void EndFrame();


private:
	LibType m_choosenLib;
	SDL_Renderer* m_renderer;

	COLOR m_backgroundColor;
	float m_deltaTime;
	float m_startframe;
	float m_endframe;
	float m_fps;
};

#endif