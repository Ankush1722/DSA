// #include <iostream>
// using namespace std;
// int main()
// {
//     int firstvalue = 5, secondvalue = 15;
//     //char thirdvalue = "a";
//     int *p1, *p2;
//     char *p3;
//     p1 = &firstvalue;  //	p1	=	address	of	firstvalue
//     p2 = &secondvalue; //	p2	=	address	of	secondvalue
//     //p3 = &thirdvalue;  //	p3	=	address	of	thirdvalue
//     *p1 = 10;          //	value	pointed	to	by	p1	=	10
//     *p2 = *p1;         //	value	pointed	to	by	p2	=	valuepointed	to	by	p1
//     p1 = p2;           //	p1	=	p2	(value	of	pointer	is	copied)
//     *p1 = 20;          //	value	pointed	to	by	p1	=	20
//    // *p3 = "b";      //	value	pointed	to	by	p3	=	‘b	’
//     cout << "firstvalue	is	" << firstvalue << '\n';
//     cout << "secondvalue	is	" << secondvalue << '\n';
// //    cout << "thirdvalue	is	" << thirdvalue << '\n';
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int *p = &i;

    // cout << p << endl;
    // cout << *p++ << endl;
    // cout << p << endl;

    // cout << " " << endl;

    // cout << p << endl;
    // cout << *++p << endl;
    // cout << p << endl;

    // cout << p << endl;
    // cout << ++*p << endl;
    // cout << p << endl;

    cout << " " << endl;

    cout << p << endl;
    cout << (*p)++ << endl;
    cout << p << endl;
    cout << *p << endl;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#ifndef BUF_SIZE
#define BUF_SIZE 100

unsigned int target = 0x11223344;
char *secret = "A secret message\n";

void myprintf(char *msg)
{
    unsigned int *framep;
    // Save the ebp value into framep
    asm("movl %%ebp, %0"
        : "=r"(framep));
    printf("Frame Pointer (inside myprintf):      0x%.8x\n", (unsigned int)framep);
    printf("The target variable's value (before): 0x%.8x\n", target);

    printf(msg);
    printf("The target variable's value (after):  0x%.8x\n", target);
}

int main(int argc, char **argv)
{
    char buf[1500];
    printf("The input buffer's address:    0x%.8x\n", (unsigned int)buf);
    printf("The secret message's address:  0x%.8x\n", (unsigned int)secret);
    printf("The target variable's address: 0x%.8x\n", (unsigned int)&target);
    printf("Waiting for user input ......\n");
    int length = fread(buf, sizeof(char), 1500, stdin);
    printf("Received %d bytes.\n", length);

    dummy_function(buf);
    printf("(^_^)(^_^)  Returned properly (^_^)(^_^)\n");

    return 1;
}
void dummy_function(char *str)
{
    char dummy_buffer[BUF_SIZE];
    memset(dummy_buffer, 0, BUF_SIZE);

    myprintf(str);
}