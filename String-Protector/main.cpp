#include "StringProtector.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <ios>


// If you want to improve the Key & Seed generation process read this:
// https://guidedhacking.com/threads/random-number-generator-at-compile-time.15512/



int main()
{

	auto text = SString("lol.txt");
	printf("Encrypted: %s\n", text.GetRaw());
	while (true) 
	{
		if ((GetKeyState(VK_RETURN) & 0x8000)!=0)
		{ 
			printf("Decrypted: %s\n", text.Decrypt());
		}
		Sleep(50);
	}
	return 0;
}
