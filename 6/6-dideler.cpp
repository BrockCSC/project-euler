/**
 * Problem 6
 * What is the difference between the sum of the squares and the square of the sums?
 */

#include <cstdio>
int main()
{
  unsigned int sumOfSquares=0, squareOfSum=0;
  int max = 101;
  while (max --> 0)
  {
    sumOfSquares += max*max;
    squareOfSum += max;
  }
  squareOfSum *= squareOfSum;
  printf("%d\n", squareOfSum-sumOfSquares);
}
