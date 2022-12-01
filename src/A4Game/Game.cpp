#include "A4Engine/Game.hpp"


using namespace TL;

namespace
{
	constexpr float transition_duration = 0.4f;
}

void Game::startup()
{
	m_draw_colliders = false;

	fullscreen = false;
}


void Game::update()
{

	m_draw_colliders = !m_draw_colliders;


	if (m_next_ease >= 1.0f)
	{
		m_transition = false;
	}
	
}

