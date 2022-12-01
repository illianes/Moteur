#pragma once

namespace TL
{
	class Game
	{
	public:
		static constexpr int width = 240;
		static constexpr int height = 135;
		static constexpr int tile_width = 8;
		static constexpr int tile_height = 8;
		static constexpr int columns = width / tile_width;
		static constexpr int rows = height / tile_height + 1;

		bool fullscreen = false;

		void startup();
		void update();

		//static int rand_int(int min, int max);

	private:
		bool m_draw_colliders;
		bool m_transition = false;
		float m_next_ease;
		float m_shake_timer = 0;
	};
}