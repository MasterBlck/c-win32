#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <winuser.h>

using namespace std;

/*
int main()
{
    cout << "Hello world!" << endl;
    system("pause");

    return 0;
}
*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow){
    char tamint[100];

    sprintf(tamint, "Hola Windows!\nTamaño de entero: %d", sizeof(int));

    //MessageBox (NULL, ("Hola Windows!"), TEXT ("Mensaje"), 0);
    MessageBox (NULL, (tamint), TEXT (tamint), MB_ICONQUESTION);
    return 0;
}
