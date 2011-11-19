// Tom Koole
// 2011-11-18 
// Project Euler #17
// ugly but it works

#include <stdio.h>
#include <stdlib.h>
#include <string>

// ascii value
#define ZERO 48

std::string lookUp(int i);

int main() {
 std::string words = "";
 for(int i = 1; i <= 1000; i++) {
  std::string word = lookUp(i);
  words += word;
 }
 printf("The length of all the numbers from 1 to 1000 in word format is: %d\n", words.length());
 system("Pause");
}

std::string lookUp(int i) {
 if(i > 9999) return "";
 char str[] = {0,0,0,0,0};
 sprintf((char*)&str, "%d", i);

 switch(i) {
 // Base Cases
 case 1: return "one";
 case 2: return "two";
 case 3: return "three";
 case 4: return "four";
 case 5: return "five";
 case 6: return "six";
 case 7: return "seven";
 case 8: return "eight";
 case 9: return "nine";
 case 10: return "ten";
 case 11: return "eleven";
 case 12: return "twelve";
 case 13: return "thirteen";
 case 14: return "fourteen";
 case 15: return "fifteen";
 case 16: return "sixteen";
 case 17: return "seventeen";
 case 18: return "eighteen";
 case 19: return "nineteen";
 default: 
  {
   if(i < 100) {
    switch(str[0] - ZERO) {
    // Recursively get 'ones' column (could eventually be used for thousands)
    case 2: return "twenty"+lookUp(str[1]-ZERO);
    case 3: return "thirty"+lookUp(str[1]-ZERO);
    case 4: return "forty"+lookUp(str[1]-ZERO);
    case 5: return "fifty"+lookUp(str[1]-ZERO);
    case 6: return "sixty"+lookUp(str[1]-ZERO);
    case 7: return "seventy"+lookUp(str[1]-ZERO);
    case 8: return "eighty"+lookUp(str[1]-ZERO);
    case 9: return "ninety"+lookUp(str[1]-ZERO);
    }
   }

   if(i >= 100 && i < 1000) {
    if(i - (str[0] - ZERO) * 100 > 0)
     // given number YXZ output is: lookup(Y) + hundredand + lookup(XZ)
     return lookUp(str[0]-ZERO)+"hundredand" + lookUp(i - (str[0]-ZERO) * 100);
    else
     // hundreds base case
     return lookUp(str[0]-ZERO)+"hundred";
   }

   if(i >= 1000 && i < 10000) {
    // given number YXZ output is: lookup(Y) + hundredand + lookup(XZ)
    return lookUp(str[0]-ZERO)+"thousand" + lookUp(i - (str[0]-ZERO) * 1000);
   }

   // could go on
  }
 }

 return "";
}