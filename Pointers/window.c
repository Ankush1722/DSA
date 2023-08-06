/*#include<windows.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    MessageBox(NULL, "hello World", "My first Windows Program", MB_OK);
    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x=3;
printf("initial value %d\n",x);
printf("%d\n%d\n%d\n%d\n\n",x, ++x, x++, x);
x=3;
printf("%d\n%d\n%d",x,x++, x);
return 0;
} 

