#include <iostream>

/* The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 *
 * The prime factors of a positive integer are the prime numbers that divide that integer exactly.
 * http://en.wikipedia.org/wiki/Euclid's_algorithm#Factorization_algorithms
 *
 * OR http://www.wolframalpha.com/input/?i=largest+prime+factor+of+600851475143
 */
int main()
{
  long int num = 600851475143; // the number to factorize
  int checker = 2; // first factor to check

  while (checker*checker <= num)
  {
    if (num % checker == 0) num /= checker;
    else ++checker;
  }
  std::cout << num << std::endl;
}

