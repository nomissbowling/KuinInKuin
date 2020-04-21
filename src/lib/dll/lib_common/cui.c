#include "cui.h"

EXPORT void _print(const U8* str)
{
	const Char* str2;
	if (str == NULL)
		str2 = L"(null)";
	else
		str2 = (const Char*)(str + 0x10);
	fputws(str2, stdout); // '_putws' is not used because it carries a new line at the end.
#if defined(_DEBUG)
	OutputDebugString(str2);
#endif
}
