#pragma once

#include <string>
#include <SDL.h>
#include <InputTrigger.hpp>

class SDLppWindow
{ 
	/*virtual void onKeyDown(int key) override;
	virtual void onKeyUp(int key) override;*/

	public:
		SDLppWindow(const std::string& title, int width, int height, Uint32 flags = 0);
		SDLppWindow(const std::string& title, int x, int y, int width, int height, Uint32 flags = 0);
		SDLppWindow(const SDLppWindow&) = delete; // constructeur par copie
		SDLppWindow(SDLppWindow&& window) noexcept; // constructeur par mouvement
		~SDLppWindow();

		SDL_Window* GetHandle() const;

		SDLppWindow& operator=(const SDLppWindow&) = delete; // opérateur d'affectation par copie
		SDLppWindow& operator=(SDLppWindow&& window) noexcept; // opérateur d'affectation par mouvement

	private:
		SDL_Window* m_window;
};
