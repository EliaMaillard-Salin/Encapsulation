#ifndef WINDOWS_H_
#define WINDOWS__H_

#include "Colors.h"
#include "Sprites.h"

enum LibType
{
	SDL,
	RAYLIB
};

class Window
{

public : 
	Window();
	virtual ~Window() {};

	void ChooseLib(LibType libType);
	
	void SetBackgroundColor(COLOR color);

	virtual void TellType() = 0;

	virtual void StartFrame() = 0;
	void EndFrame();

	virtual Sprite* CreateSprite() = 0;


protected:

	LibType m_choosenLib;

	float m_deltaTime;
	float m_startframe;
	float m_endframe;
	float m_fps;

	COLOR m_backgroundColor;
};

class WindowRaylib : private Window
{
public: 
	void TellType() { std::cout << "rl" << std::endl; }
	void StartFrame() override {};
};

class WindowSDL : private Window
{
public: 
	void TellType() { std::cout << "sdl" << std::endl; }
	void StartFrame() override;

private:
	SDL_Renderer* m_renderer;
};

#endif

