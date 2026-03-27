#pragma once
// Auto-generated 

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
		        eax = eax + 0xE6DA4BE6u;
		        eax = (eax << 0x10) | (eax >> 0x10);
		        eax = eax + 0x2EB7B7B7u;
		        eax = eax ^ 0xB6EAB521u;
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
		        eax = eax + 0xE82DDECDu;
		        eax = (eax << 0x04) | (eax >> 0x1C);
		        eax = eax + 0x3B7B71CDu;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace BaseNetworkable_Decryption

	namespace ActiveItem_Decryption
	{
		// decryptions::decrypt_active_item
		std::uintptr_t decrypt_active_item(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x4F0FAE2Cu;
		        eax = (eax << 0x11) | (eax >> 0x0F);
		        eax = eax ^ 0x87FAFDB2u;
		        eax = (eax << 0x11) | (eax >> 0x0F);
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
		        eax = eax + 0x146AB9DBu;
		        eax = (eax << 0x0D) | (eax >> 0x13);
		        eax = eax - 0x7003D376u;
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
		        eax = (eax >> 0x0F) | (eax << 0x11);
		        eax = eax + 0x8C4D321Bu;
		        eax = (eax << 0x05) | (eax >> 0x1B);
		        eax = eax + 0x3DA3AAA6u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_clothingAccuracyBonus
		std::uintptr_t decrypt_clothingAccuracyBonus(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x3;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax ^ 0xED600B1Du;
		        eax = eax + 0x7F9129B3u;
		        eax = eax ^ 0xAF43C59Bu;
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
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = (eax >> 0x11) | (eax << 0x0F);
		        eax = eax ^ 0x484C15C2u;
		        eax = (eax << 0x19) | (eax >> 0x07);
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace ActiveItem_Decryption

	namespace PlayerInventory_Decryption
	{
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
		        eax = (eax >> 0x0F) | (eax << 0x11);
		        eax = eax + 0x8C4D321Bu;
		        eax = (eax << 0x05) | (eax >> 0x1B);
		        eax = eax + 0x3DA3AAA6u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

	} // namespace PlayerInventory_Decryption

	namespace Convar_Graphics_Decryption
	{
		// decryptions::decrypt_int
		std::uintptr_t decrypt_int(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0xE6DA4BE6u;
		        eax = (eax << 0x10) | (eax >> 0x10);
		        eax = eax + 0x2EB7B7B7u;
		        eax = eax ^ 0xB6EAB521u;
		        *((std::uint32_t*)rdx - 1) = eax;
		        --r8d;
		    } while (r8d);
		    return rax;
		}

		// decryptions::decrypt_float
		std::uintptr_t decrypt_float(std::uintptr_t a1)
		{
		    std::uintptr_t rax = a1;
		    std::uintptr_t* rdx = &rax;
		    std::uint32_t r8d = 0x2;
		    uint32_t eax, ecx;
		
		    do {
		        eax = *(std::uint32_t*)(rdx);
		        rdx = (std::uintptr_t*)((std::uint8_t*)rdx + 0x4);
		        eax = eax + 0x29D49B31u;
		        eax = (eax << 0x07) | (eax >> 0x19);
		        eax = eax + 0x54C45BAu;
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
		    eax = (eax >> 0x1B) | (eax << 0x05);
		    eax = eax ^ 0x69675F8Du;
		    eax = eax - 0x57CAF52u;
		    *(uint32_t*)&v1 = eax;
		    return v1;
		}

		uint32_t decrypt_fov(uint64_t a1)
		{
		    uint32_t eax = static_cast<uint32_t>(a1);
		    eax = eax + 0x57CAF52u;
		    eax = eax ^ 0x69675F8Du;
		    eax = (eax << 0x1B) | (eax >> 0x05);
		    return eax;
		}

	} 

} // namespace Decryptions
