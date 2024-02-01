#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

LRESULT WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)

{

    if(message==WM_DESTROY)
        PostQuitMessage(0);
    else if(message==WM_KEYDOWN)
        printf("code= %d\n", wparam );
    else if(message==WM_CHAR)
        printf(" %c\n", wparam );
    else if (message==WM_MOUSEMOVE)
    {
        int xPos = LOWORD(lparam);
        int yPos = HIWORD(lparam);
        printf("mouse [%d,%d]\n", xPos,yPos);
    }
    else if(message==WM_LBUTTONDOWN)
        printf("mouse Left Button Down\n");
    else if(message==WM_RBUTTONDOWN)
        printf("mouse Right Button Down\n");



    else return DefWindowProcA(hwnd, message, wparam, lparam);


}

int main()
{
    WNDCLASSA wcl;
        memset(&wcl, 0, sizeof(WNDCLASSA));
        wcl.lpszClassName = "It's my";
        wcl.lpfnWndProc = WndProc;

    RegisterClassA(&wcl);

    HWND hwnd;
    hwnd = CreateWindow("It's my", "It's my Name", WS_OVERLAPPEDWINDOW,
                        10,10, 640,480, NULL,NULL,NULL,NULL);

    ShowWindow(hwnd, SW_SHOWNORMAL);



        MSG msg;
        while(GetMessage(&msg, NULL, 0, 0)){

            TranslateMessage(&msg);
            DispatchMessage(&msg);


        }



    return 0;
}
