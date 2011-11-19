// Tom Koole
// 2011-11-18 
// Project Euler #5

#include <stdio.h>
#include <stdlib.h>

int main() {
 int number = 0; // number to check
 int mod = -1; // mod value to check
 do {
  number += 20; // don't need to check all numbers 
  for(int p = 19; p > 0; p--) {
   mod = number % p;
   if(mod > 0) break; // don't need to check the rest of the values
  }
 } while(mod != 0);
 printf("%d is the smallest number divisible by all numbers from 1 to 20.\n", number);
 return 0;
}