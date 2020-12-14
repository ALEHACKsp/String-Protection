#include "StringProtector.h"
#include <Windows.h>
#include <iostream>


// If you want to improve the Key & Seed generation process read this:
// https://guidedhacking.com/threads/random-number-generator-at-compile-time.15512/



int main()
{

	auto text1 = SString("text1");
	printf("Encrypted: %s\n", text1.GetRaw());
	while (true) 
	{
		if ((GetKeyState(VK_RETURN) & 0x8000)!=0)
		{ 
			printf("Decrypted: %s\n", text1.Decrypt());
		}
		Sleep(50);
	}
	return 0;
}
