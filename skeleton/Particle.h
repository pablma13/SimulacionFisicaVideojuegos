#pragma once
#include "core.hpp"
#include "RenderUtils.hpp"
class Particle {
public:
	Particle(Vector3 Pos, Vector3 Vel) {
		pose.p = Pos;
		vel = Vel;
		rItem = new RenderItem();
	};

	~Particle() {
		rItem->release();
	};

	void integrate(double t) {
		pose.p + (vel * t);
	};
private:
	Vector3	vel;
	physx::PxTransform pose;
	RenderItem* rItem;
};