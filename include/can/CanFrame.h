#pragma once

#include <cstdint>
#include <array>

namespace CAN 
{

	#pragma pack(push, 1)
	struct CanFrame
	{
		uint32_t 							 id;    // 11-bit standard or 29-bit extended
		uint8_t  							 dlc;   // Data Length Code (0-8)
		std::array<uint8_t, 8> data;  // Payload 
	};
	#pragma pack(pop)

}