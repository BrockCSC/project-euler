// Tom Koole
// 2011-11-27
// Project Euler #4

#include <stdio.h>
#include <stdlib.h>
#include <string>

bool isPalindrome(int num);

// loop for all the larger numbers
int main() {
 int max = 0;
 for(int i = 999; i > 899; i--)
  for(int j = 999; j > 899; j--) {
   int val = i * j;
   if(isPalindrome(val)) {
    max = (val > max) ? val : max;
   }
  }
 
 printf("The largest palindrome that is a product of two 3 digit numbers is: %d\n", max);
 system("Pause");
 return 0;
}

//simple string palindrome check
bool isPalindrome(int num) {
 char* chrs = new char[10];
 sprintf_s(chrs, 10, "%d", num);
 std::string str = std::string(chrs);
 delete[] chrs;
 for(int i = 0, j = str.length() - 1; i <= j; i++, j--)
  if(str[i] != str[j]) 
   return false;
 return true;
}