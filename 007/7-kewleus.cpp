// Tom Koole
// 2011-11-18 
// Project Euler #7
// similar to 10

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool isPrime(unsigned long num);

int main() {
 unsigned long nPrimes = 3; // skip 2 and 3 
 unsigned long num = 3;
 while(nPrimes <= 10001) {
  num += 2;
  nPrimes += (isPrime(num)) ? 1 : 0;
 }
 // num contains the 10001st prime
 printf("The 10001st prime is '%d' \n", num);
 system("Pause");
}

// slow prime finder
bool isPrime(unsigned long num) {
 if(!(num % 2)) return false;
 unsigned long k = sqrtl(num) + 1;
 for(unsigned long i = 3; i < k; i+=2) {
  if(!(num % i)) return false;
 }
 return true;
}