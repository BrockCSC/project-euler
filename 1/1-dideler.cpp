/**
 * Problem 1
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <cstdio>
#include <set>
using namespace std;

typedef set<int> si;

int main()
{
  // Checking every number below 1000 to see if it's a multipe of 3 or 5 is slow.
  // Instead we calculate and sum the multiples of 3 OR 5 that are below 1000 (OR indicates no duplicates)
  
  unsigned int sum=0, mul3=3, mul5=5;
  si multiples; // set of multiples of 3 or 5

  for(; mul3 < 1000; mul3+=3) // insert multiples of 3 below 1000
    multiples.insert(mul3);

  for(; mul5 < 1000; mul5+=5) // insert multiples of 5 below 1000 (multiples dividible by 15 are duplicates and won't be inserted)
    multiples.insert(mul5);

  for(si::iterator it=multiples.begin(); it!=multiples.end(); it++)
    sum += (int) *it;

  printf("%d\n",sum);
}
