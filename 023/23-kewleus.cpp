// Tom Koole
// 2011-11-27
// Project Euler #23

#include <stdio.h>
#include <stdlib.h>
#include <vector>

int getSumOfDivisors(int num);
std::vector<int> getAbundantNumbersLessThan(int num);
bool isSumOfAbundant(int num, std::vector<int> &abundant);

// list all abundant numbers, loop through numbers 0 to 28122
// and check if each is a sum of two abundant numbers
int main() {
 int MAX = 28123;
 std::vector<int> abundant = getAbundantNumbersLessThan(MAX);
 unsigned long sum = 0;
 for(int i = 0; i < MAX; i++) {
  if(!isSumOfAbundant(i, abundant)) {
   sum += i;
  }
 }
 printf("Sum of all non-abundant numbers is %lu\n", sum);
 system("Pause");
}

// double loop through abundant numbers, don't over check so
// break the loops if the abundant numbers are larger than the
// number being checked
bool isSumOfAbundant(int num, std::vector<int>& abundant) {
 std::vector<int>::iterator itr_first;
 std::vector<int>::iterator itr_second;

 for(itr_first = abundant.begin(); itr_first < abundant.end(); itr_first++)
  for(itr_second = abundant.begin(); itr_second < abundant.end(); itr_second++) {
   if(*itr_first > num)
    return false;
   if(*itr_second > num)
    break;
   if(num == *itr_first + *itr_second)
    return true;
  }
 return false;
}

// loop through numbers up to parameter calculate sum of divisors
// if the sum is > than the number itself it is considered abundant
std::vector<int> getAbundantNumbersLessThan(int num) {
 std::vector<int> abundant = std::vector<int>();
 for(int i = 1; i < num; i++) 
  if(getSumOfDivisors(i) > i)
   abundant.push_back(i);
 return abundant;
}

int getSumOfDivisors(int num) {
 int sum = 0;
 for(int i = 1; i < num / 2 + 1; i++)
  sum += (num % i) ? 0 : i;
 return sum;
}