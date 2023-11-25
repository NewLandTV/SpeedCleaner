#ifndef __INPUT_H__
#define __INPUT_H__

#include <Windows.h>

#define KeyDown(keyCode) (GetAsyncKeyState(keyCode) & 0x8000 ? 1 : 0)
#define KeyUp(keyCode) (GetAsyncKeyState(keyCode) & 0x8000 ? 0 : 1)

#endif