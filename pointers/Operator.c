#include<stdio.h>
#include<stdlib.h>

void fmt_str()
{
int x=5;
printf("PreIncremented value: %d\nPostIncremented value: %d\nFinal Value: %d\n", ++x, x++, x);
} 

int main()
{
fmt_str();
return 0;
}



















// // #include <stdio.h>
// // void fmtstr()
// // {
// //     char input[100];
// //     int var = 0x11223344;

// //     printf("Target address: %x\n", (unsigned)&var);
// //     printf("Data at target address: x%x\n", var);

// //     printf("Please enter a string: ");
// //     fgets(input, sizeof(input) - 1, stdin);

// //     printf(input); 

// //     printf("Data at the target address:0x%x\n", var);
// // }

// // void main()
// // {
// //     fmtstr();
// // }

// #include <stdio.h>
// #include <string.h>

// #define GREEN "\033[32m"
// #define RED "\033[31m"
// #define YELLOW "\033[33m" 
// #define RESET "\033[0m"

// void format_str(char *str)

// {
// unsigned int *framep;
// unsigned int *ret_addr;
// asm("movl %%ebp, %0" : "=r" (framep)); 
// ret_addr = framep + 1;
// printf(RED "Address of input Array: " YELLOW "0x%.8x\n" RED, (unsigned)str);
// printf(RED "Address of frame pointer: " YELLOW "0x%.8x\n" RED, (unsigned)framep);
// printf(RED "Initial Return address of function: " YELLOW "0x%.8x\n" RED, (unsigned)ret_addr);
// printf(str);
// printf(RED "Final Return address of function: " YELLOW "0x%.8x\n" RED, (unsigned)ret_addr);
// printf(RESET);
// }
// int main()
// {
// FILE *badfile;
// char str[200];

// badfile = fopen("badfile", "rb");
// fread(str, sizeof(char), 200, badfile);
// format_str(str);
// return 0;
// }
