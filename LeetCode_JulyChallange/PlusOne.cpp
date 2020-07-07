// Topic: Plus One
// Tags: Mathematics, Vectors

// Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

// The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

// You may assume the integer does not contain any leading zero, except the number 0 itself.

// Example 1:

// Input: [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Example 2:

// Input: [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int n = digits.size()-1; 
        while(n>=0)
        {
          if(digits[n]==9)
          {
              digits[n]=0;
              
          }
            else
            {
                digits[n]=digits[n]+1;
                return digits;
            }
            n--;
            
        }
        digits.insert(digits.begin(),1);
        return digits;

        //             int no=0,plus;
// 	    for(int i=1;i<=n;i++)
// 	    {
// 	        no=no+digits[i];
//             if(i!=n)
//     	        no=no*10;
// 	    }
//         plus=no+1;
//         int rem=0;
//         while(plus>0)
//         {
//             for(int i=n;i>=1;i--)
//             {
//                 rem=plus%10;
//                 plus=plus/10;
//                 digits[i]=rem;
//             }
//         }
    
//         return digits;
        }
};