#pragma once
#include <A4Engine/Export.hpp>
#include <SDL.h>
#include <string>
#include <A4Engine/Export.hpp>

class SDLppRenderer;

class Sprite 
{
	public :
		Sprite() = default;
		Sprite(SDL_Renderer* target, std::string texture);

		
	private:


};

class Transform
{
public:
	Transform() = default;


private:


};

class A4ENGINE_API RenderSystem
{
	public:
		RenderSystem(SDLppRenderer& renderer, std::string save);

	private:
		SDLppRenderer& rendu;
};