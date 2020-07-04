// Topic : Ugly Number II
// Tags: Mathematics, Lists

// Write a program to find the n-th ugly number.

// Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 

// Example:

// Input: n = 10
// Output: 12
// Explanation: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.
// Note:  

// 1 is typically treated as an ugly number.
// n does not exceed 1690.

// Hide Hint #1  
// The naive approach is to call isUgly for every number until you reach the nth one. Most numbers are not ugly. Try to focus your effort on generating only the ugly ones.
//    Hide Hint #2  
// An ugly number must be multiplied by either 2, 3, or 5 from a smaller ugly number.
//    Hide Hint #3  
// The key is how to maintain the order of the ugly numbers. Try a similar approach of merging from three sorted lists: L1, L2, and L3.
//    Hide Hint #4  
// Assume you have Uk, the kth ugly number. Then Uk+1 must be Min(L1 * 2, L2 * 3, L3 * 5).

class Solution {
public:
    int min(int x, int y, int z) {            //find smallest among three numbers
    if(x < y) {
      if(x < z)
         return x;
      else
         return z;
    }else {
      if(y < z)
         return y;
      else
         return z;
   }
    }
    int nthUglyNumber(int n) {
        int uglyNum[n];          // To store ugly numbers
   int i2 = 0, i3 = 0, i5 = 0;

   //find next multiple as 1*2, 1*3, 1*5

   int next2mul = 2;
   int next3mul = 3;
   int next5mul = 5;
   int next = 1;              //initially the ugly number is 1

   uglyNum[0] = 1;

   for (int i=1; i<n; i++) {
      next = min(next2mul, next3mul, next5mul);       //find next ugly number
      uglyNum[i] = next;

      if (next == next2mul) {
         i2++;             //increase iterator of ugly numbers whose factor is 2
         next2mul = uglyNum[i2]*2;
      }

      if (next == next3mul) {
         i3++;             //increase iterator of ugly numbers whose factor is 3
         next3mul = uglyNum[i3]*3;
      }

      if (next == next5mul) {
         i5++;              //increase iterator of ugly numbers whose factor is 5
         next5mul = uglyNum[i5]*5;
      }
   }
   return next; 

    }
};