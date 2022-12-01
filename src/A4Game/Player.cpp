#include "A4Engine/Player.hpp"


using namespace TL;

namespace
{
	constexpr float max_ground_speed = 60;
	constexpr float max_air_speed = 70;
	constexpr float ground_accel = 500;

	constexpr float friction = 800;
	constexpr float hurt_friction = 200;
	constexpr float gravity = 450;
	constexpr float jump_force = -105;
	constexpr float jump_time = 0.18f;
}

//Player::Player()
//{
//
//	input_move->add_dpad(0);
//	input_move->add_left_stick(0, 0.2f);
//
//
//	input_jump->press_buffer = 0.15f;
//
//	input_attack->press_buffer = 0.15f;
//}

/*void Player::update()
{
	/*auto was_on_ground = m_on_ground;
	m_on_ground = mover->on_ground();
	int input = input_move->sign().x;*/

	//{
		//mover->speed.x += input * (m_on_ground ? ground_accel : air_accel) * Time::delta;

		//auto maxspd = (m_on_ground ? max_ground_speed : max_air_speed);

	//}

	/*if (input_jump->pressed() && mover->on_ground())
	{
		input_jump->consume_press();
		anim->scale = Vec2f(m_facing * 0.65f, 1.4f);
		mover->speed.x = input * max_air_speed;
		m_jump_timer = jump_time;
	}*/

		/*if (input_attack->pressed())
		{
			input_attack->consume_press();

			m_attack_timer = 0;

			if (m_on_ground)
				mover->speed.x = 0;
		}*/
	

		/*m_attack_timer += Time::delta;

		if (m_attack_timer < 0.2f)
		{
			m_attack_collider->set_rect;
		}
		else if (m_attack_timer < 0.5f)
		{
			m_attack_collider->set_rect;
		}
		else if (m_attack_collider)
		{
			m_attack_collider->destroy();
			m_attack_collider = nullptr;
		}

		if (m_attack_collider)
		{
			auto rect = m_attack_collider->get_rect();
			rect.x = -(rect.x + rect.w);
			m_attack_collider->set_rect(rect);
		}

}*/