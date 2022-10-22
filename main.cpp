#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    int x = 0;
    while (x == 0)
    {
        if (GetAsyncKeyState('W'))
        {
            x = 1;
        }
        else
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(50);
        }
    }
    return 0;
}
