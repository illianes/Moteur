#pragma once

#include <entt/entt.hpp>

#include <vector>

class PhysicsSystem
{
public:
	PhysicsSystem(entt::registry& registry);
	PhysicsSystem(const PhysicsSystem&) = delete;
	PhysicsSystem(PhysicsSystem&&) = delete;

	PhysicsSystem& operator = (const PhysicsSystem) = delete;
	PhysicsSystem& operator = (PhysicsSystem) = delete;

	//virtual ~PhysicsSystem();

	void SetGravity(float value);
	void SetStop(float value);

	void Step(float deltaTime);
	void Update(float deltaTime);

private:
	entt::registry& _registry;

	float timeStep = 1.f / 50;
	float physicsAccumulator{};
};
