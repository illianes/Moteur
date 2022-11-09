#include <A4Engine/PhysicsSystem.hpp>
#include <A4Engine/Transform.hpp>


PhysicsSystem::PhysicsSystem(entt::registry& registry) : _registry(registry)
{
    SetGravity(500);
    SetStop(1.5f);
}

void PhysicsSystem::SetGravity(float value)
{
    //cpSpaceSetGravity(space, cpv(0, value));
}

void PhysicsSystem::SetStop(float value)
{
    //cpSpaceSetStop(space, value);
}

void PhysicsSystem::Step(float deltaTime)
{
    physicsAccumulator += deltaTime;
    while (physicsAccumulator >= timeStep) {
        //spaceStep(space, timeStep);
        physicsAccumulator -= timeStep;
    }
}

void
PhysicsSystem::Update(float deltaTime)
{
    Step(deltaTime);
    /*entityTransform.SetPosition(Vector2(pos.x, pos.y));
    entityTransform.SetRotation(rotate);*/
    
}