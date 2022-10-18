#pragma once

#include <A4Engine/Export.hpp>
#include <SDL.h>
#include <string>

class A4ENGINE_API SDLppSurface
{
	public:
		SDLppSurface(int width, int height);
		SDLppSurface(const SDLppSurface&) = delete; // constructeur par copie
		SDLppSurface(SDLppSurface&& surface) noexcept; // constructeur par mouvement
		~SDLppSurface();

		void FillRect(const SDL_Rect& rect, Uint8 r, Uint8 g, Uint8 b, Uint8 a);

		SDL_Surface* GetHandle() const;
		Uint8* GetPixels();
		const Uint8* GetPixels() const;

		bool IsValid() const;

		SDLppSurface& operator=(const SDLppSurface&) = delete; // opérateur d'assignation par copie
		SDLppSurface& operator=(SDLppSurface&&) noexcept; // opérateur d'assignation par mouvement

		static SDLppSurface LoadFromFile(const std::string& filepath);

	private:
		SDLppSurface(SDL_Surface* surface);

		SDL_Surface* m_surface;
};