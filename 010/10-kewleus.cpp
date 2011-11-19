// Tom Koole
// 2011-11-18 
// Project Euler #10
// Slow and simple

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool isPrime(unsigned long num);

int main() {
 unsigned long num = 2000000;
 unsigned long long sum = 2;
 for(unsigned long i = 3; i < num; i+=2) {
  sum += (isPrime(i)) ? i : 0;
 }
 //sum contains total
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