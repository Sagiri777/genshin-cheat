#pragma once
#include <gui/IGUIModule.h>

class TeleportModule :
    public IGUIModule
{
	void Draw() override;

	std::string GetName() override;
};

