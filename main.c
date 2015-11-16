#include <windows.h>
#include <tchar.h>
#include <stdio.h>

int main(void)
{
	HANDLE hMyProcess;
	HANDLE hProcess;
	hMyProcess = GetCurrentProcess();
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, 4780);
	printf("0x%08X\n", hMyProcess);
	printf("0x%08X\n", hProcess);
	getchar();
}