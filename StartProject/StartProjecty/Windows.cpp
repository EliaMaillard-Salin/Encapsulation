#include "Windows.h"

Window::Window(): m_deltaTime(0.f), m_startframe(0.f), m_endframe(0.f), m_fps(0.f), m_backgroundColor(COLOR(255,255,255,255))
{}

void Window::ChooseLib(LibType libType)
{
	m_choosenLib = libType;

	if (m_choosenLib == SDL)
	{
		dynamic_cast<WindowSDL*>(this);
	}
	else if (m_choosenLib == RAYLIB)
	{
		dynamic_cast<WindowRaylib*>(this);
	}
}

void Window::SetBackgroundColor(COLOR color)
{
	m_backgroundColor = color;
}

void WindowSDL::StartFrame()
{
		m_startframe = SDL_GetTicks();
		m_deltaTime = m_startframe - m_endframe;
		m_fps = 1000 / m_deltaTime;
}

void Window::EndFrame()
{
	
}
