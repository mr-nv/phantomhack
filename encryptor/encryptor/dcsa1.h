#pragma once
//DCSA1 Hashing algorithm
#include <xstring.h>

namespace DCSA1
{
	const BYTE c_base[32] = { 0xe4, 0xbe, 0xdd, 0x32, 0xeb,
							  0xb7, 0x9e, 0xb8, 0xb0, 0x61,
							  0x80, 0x97, 0xe5, 0xf8, 0x02,
							  0x89, 0xe3, 0x9b, 0x18, 0x3a,
							  0xb0, 0x07, 0x90, 0xf0, 0x56,
							  0x02, 0x12, 0x56, 0x24, 0xed, 
							  0x53, 0x22 };

	xstringA HashString(xstringA str);
	xstringA HashBinary(LPVOID* ptr, size_t size);
}