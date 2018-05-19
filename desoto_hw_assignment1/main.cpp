/*
 Dominic DeSoto
 CS 212 A
 02/04/2018 
 */

#include <iostream>
#include <cstdlib>
int main(int argc, char** argv) {
 int item1, item2, item3, item4, diff1, diff2, sum;

 std::cout << "Enter first integer: ";
 std::cin >> item1;
 std::cout << "Enter second integer: ";
 std::cin >> item2;
 std::cout << "Enter third integer: ";
 std::cin >> item3;
 std::cout << "Enter fourth integer: ";
 std::cin >> item4;

__asm__( "subl %%ebx, %%eax;" "subl %%edx, %%ecx;" "movl %%eax, %%ebx;" "movl %%ecx, %%edx;" "addl %%ebx, %%edx;"
 : "=a" (diff1), "=c" (diff2), "=d" (sum)
 : "a" (item1), "b" (item2), "c" (item3), "d" (item4)
 );

 std::cout << "The first difference: " << diff1 << std::endl;
 std::cout << "The second difference: " << diff2 << std::endl;
 std::cout << "Differences added together: " << sum << std::endl;
 
 return 0;
}