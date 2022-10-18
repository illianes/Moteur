#pragma once
#include <SDL.h>
#include <A4Engine/Export.hpp>
#include <A4Engine/Vector2.hpp>

class SDLppRenderer;
class SDLppTexture;


class A4ENGINE_API Model
{
	public:
		Model() = default;
		Model(const Model&) = default;
		Model(Model&&) = default;
		~Model() = default;

		Model& operator=(const Model&) = delete;
		Model& operator=(Model&&) = default;


	private:

		std::shared_ptr<const SDLppTexture> m_texture;
};
