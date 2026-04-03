#pragma once
// Auto generated

#include <cstdint>

namespace Decryptions
{
	namespace BaseNetworkable_Decryption
	{
		// decryptions::base_networkable_one
		std::uintptr_t base_networkable_one(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0xBBA91EE0u;
		        eax = (eax << 0x04) | (eax >> 0x1C);
		        eax = eax ^ 0x7DF13224u;
		        eax = (eax << 0x11) | (eax >> 0x0F);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::base_networkable_two
		std::uintptr_t base_networkable_two(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0x8A3854A8u;
		        eax = eax + 0xE750F66Au;
		        eax = (eax << 0x12) | (eax >> 0x0E);
		        eax = eax - 0x5E787974u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace BaseNetworkable_Decryption

	namespace ActiveItem_Decryption
   // DecryptClActiveItem
{
	if (!a1) return 0;
	uintptr_t rax = a1;
	auto rdx = reinterpret_cast<uint32_t*>(&rax);
	for (int i = 0; i < 2; i++)
	{
		uint32_t eax = *rdx;
		rdx = reinterpret_cast<uint32_t*>((uintptr_t)rdx + 4);
		eax ^= 0xA399A175u;
		uint32_t ecx = eax;
		eax <<= 0x1A;
		ecx >>= 6;
		ecx |= eax;
		ecx -= 0x103D3A2Bu;
		ecx ^= 0x68D9648Cu;
		*(rdx - 1) = ecx;
	}
	return rax;
}

	

		// decryptions::decrypt_0xE0
		std::uintptr_t decrypt_0xE0(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x1;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = (eax >> 0x0A) | (eax << 0x16);
		        eax = eax + 0x41F06F67u;
		        eax = (eax << 0x05) | (eax >> 0x1B);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_0xE0_2
		std::uintptr_t decrypt_0xE0_2(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x130AD040u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_PlayerModel
		std::uintptr_t decrypt_PlayerModel(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x1;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0x27515510u;
		        eax = eax + 0xD7EA20BEu;
		        eax = (eax << 0x13) | (eax >> 0x0D);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_PlayerEyes
		std::uintptr_t decrypt_PlayerEyes(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = (eax >> 0x0E) | (eax << 0x12);
		        eax = eax + 0xACD579C9u;
		        eax = (eax << 0x07) | (eax >> 0x19);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_PlayerEyes_2
		std::uintptr_t decrypt_PlayerEyes_2(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x7451EEA5u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_ulong
		std::uintptr_t decrypt_ulong(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0x946931B7u;
		        eax = (eax << 0x15) | (eax >> 0x0B);
		        eax = eax - 0x306BA4FDu;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_PlayerInventory
		std::uintptr_t decrypt_PlayerInventory(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = (eax >> 0x14) | (eax << 0x0C);
		        eax = eax ^ 0x79E11A24u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_eggVision
		std::uintptr_t decrypt_eggVision(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x3;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0xF1C946FBu;
		        eax = (eax << 0x08) | (eax >> 0x18);
		        eax = eax - 0x346CFBD5u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt
		std::uintptr_t decrypt(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x1;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x61015CE3u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace ActiveItem_Decryption


	namespace Convar_Graphics_Decryption
	{
		// decryptions::decrypt_float
		uint64_t encrypt_decrypt_float(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = (eax >> 0x0D) | (eax << 0x13);
		    eax = eax - 0x147EC255u;
		    eax = eax ^ 0x49426993u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_float(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax ^ 0x49426993u;
		    eax = eax + 0x147EC255u;
		    eax = (eax << 0x0D) | (eax >> 0x13);
		    return eax;
		}

		// decryptions::decrypt_bool
		uint64_t encrypt_decrypt_bool(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = eax ^ 0xA6536C7Cu;
		    eax = (eax >> 0x1B) | (eax << 0x05);
		    eax = eax - 0x2C465E13u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_decrypt_bool(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax + 0x2C465E13u;
		    eax = (eax << 0x1B) | (eax >> 0x05);
		    eax = eax ^ 0xA6536C7Cu;
		    return eax;
		}

		// decryptions::decrypt_bool
		std::uintptr_t decrypt_bool(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0xFFD7A47Eu;
		        eax = (eax << 0x1C) | (eax >> 0x04);
		        eax = eax ^ 0xD0ACE185u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::fov
		uint64_t encrypt_fov(uint32_t a1)
		{
		    uint64_t v1;
		    uint32_t eax = a1;
		    eax = (eax >> 0x0F) | (eax << 0x11);
		    eax = eax - 0x782BCD30u;
		    eax = (eax << 0x17) | (eax >> 0x09);
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_fov(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = (eax >> 0x17) | (eax << 0x09);
		    eax = eax + 0x782BCD30u;
		    eax = (eax << 0x0F) | (eax >> 0x11);
		    return eax;
		}

	} // namespace Convar_Graphics_Decryption
