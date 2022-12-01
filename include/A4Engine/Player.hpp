#pragma once

namespace TL
{
	class PlayerComp
	{
	public:
		static constexpr int st_normal = 0;
		static constexpr int st_attack = 1;
		static constexpr int st_hurt = 2;
		static constexpr int st_start = 3;
		static constexpr int max_health = 4;

		int health = max_health;

	private:
		int m_state = st_start;
		int m_facing = 1;
		float m_jump_timer = 0;
		float m_attack_timer = 0;
		float m_hurt_timer = 0;
		float m_invincible_timer = 0;
		float m_start_timer = 1;
		PlayerComp* m_attack_collider = nullptr;
		bool m_on_ground = false;
	};
}