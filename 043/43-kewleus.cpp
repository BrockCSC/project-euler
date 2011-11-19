// Tom Koole
// 2011-11-18
// Project Euler #43s
// some very ugly code but its quick and works

#include <stdio.h>
#include <stdlib.h>

int getNumber(char d1, char d2, char d3);
unsigned long getWholeNumber(char d1, char d2, char d3, char d4, char d5, char d6, char d7, char d8, char d9, char d10);
char getAvailable(bool arr[], char ith);

int main() {
 unsigned long long sum = 0;
 char str[] = {0,0,0,0,0,0,0,0,0,0};
 bool arr[] = {0,0,0,0,0,0,0,0,0,0};
 
 // for each digit, loop through all available values
 // store whether a value is used or not in arr[] 0 - 9
 for(char x1 = 0; x1 < 10; x1++){
  str[0] = getAvailable(arr, x1+1);
  arr[str[0]] = true;
  for(char x2 = 0; x2 < 9; x2++){
   str[1] = getAvailable(arr,x2+1);
   arr[str[1]] = true;
   for(char x3 = 0; x3 < 8; x3++){
    str[2] = getAvailable(arr,x3+1);
    arr[str[2]] = true;
    for(char x4 = 0; x4 < 7; x4++){
     str[3] = getAvailable(arr,x4+1);
     arr[str[3]] = true;
     for(char x5 = 0; x5 < 6; x5++){
      str[4] = getAvailable(arr,x5+1);
      arr[str[4]] = true;
      for(char x6 = 0; x6 < 5; x6++){
       str[5] = getAvailable(arr,x6+1);
       arr[str[5]] = true;
       for(char x7 = 0; x7 < 4; x7++){
        str[6] = getAvailable(arr,x7+1);
        arr[str[6]] = true;
        for(char x8 = 0; x8 < 3; x8++){
         str[7] = getAvailable(arr,x8+1);
         arr[str[7]] = true;
         for(char x9 = 0; x9 < 2; x9++){
          str[8] = getAvailable(arr,x9+1);
          arr[str[8]] = true;
          for(char x10 = 0; x10 < 1; x10++)
          {
           str[9] = getAvailable(arr,x10+1);
           arr[str[9]] = true;

           // check if it's pandigital
           if(
            getNumber(str[1],str[2],str[3]) % 2 == 0 &&
            getNumber(str[2],str[3],str[4]) % 3 == 0 &&
            getNumber(str[3],str[4],str[5]) % 5 == 0 &&
            getNumber(str[4],str[5],str[6]) % 7 == 0 &&
            getNumber(str[5],str[6],str[7]) % 11 == 0 &&
            getNumber(str[6],str[7],str[8]) % 13 == 0 &&
            getNumber(str[7],str[8],str[9]) % 17 == 0) {
             // if it is get the actual value and sum it
             unsigned long i = getWholeNumber(str[0], str[1], str[2], str[3], str[4], str[5], str[6], str[7], str[8], str[9]);
             sum += i;
             printf("found: %u\n", i);
           }
		   // after using the specific digit-value reset the array value
           // so it can be re-used
           arr[str[9]] = false;
          }
          arr[str[8]] = false;
         }
         arr[str[7]] = false;
        }
        arr[str[6]] = false;
       }
       arr[str[5]] = false;
      }
      arr[str[4]] = false;
     }
     arr[str[3]] = false;
    }
    arr[str[2]] = false;
   }
   arr[str[1]] = false;
  }
  arr[str[0]] = false;
 }

 printf("total: %llu\n", sum);
 system("Pause");
}


int getNumber(char d1, char d2, char d3) {
 return d1 * 100 + d2 * 10 + d3;
}

unsigned long getWholeNumber(char d1, char d2, char d3, char d4, char d5, char d6, char d7, char d8, char d9, char d10) {
 unsigned long i = 0;
 i += d1 * 1000000000;
 i += d2 * 100000000;
 i += d3 * 10000000;
 i += d4 * 1000000;
 i += d5 * 100000;
 i += d6 * 10000;
 i += d7 * 1000;
 i += d8 * 100;
 i += d9 * 10;
 i += d10;
 return i;
}

char getAvailable(bool arr[], char ith) {
 char c = 0;
 for(char i = 0; i < 10; i++)
 {
  if(!arr[i]) c++;
  if(c == ith) return i;
 }
 return 0;
}
