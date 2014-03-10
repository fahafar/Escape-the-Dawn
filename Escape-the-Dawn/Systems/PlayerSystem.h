#ifndef PlayerSystem_h__
#define PlayerSystem_h__

#include <array>

#include "System.h"
#include "Renderer.h"
#include "Components/Transform.h"
#include "Components/Input.h"
#include "logging.h"

namespace Systems
{

	class PlayerSystem : public System
	{
	public:
		PlayerSystem(World* world) 
			: System(world) {	}

		void Update(double dt) override;
		void UpdateEntity(double dt, EntityID entity, EntityID parent) override;

	private:

	};

}

#endif // InputSystem_h__
