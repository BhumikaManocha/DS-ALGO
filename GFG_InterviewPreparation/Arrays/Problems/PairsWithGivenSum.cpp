/* 
Given an array of integers, and a number 'sum', print all pairs in the array whose sum is equal to 'sum'.

Examples :
Input  :  n=5
          arr[] = {1, 3, 4, 2, 5}
          sum = 6
Output : 1 and 4
         2 and 3
    

*/

#include <iostream>
#include<algorithm>
using namespace std;

void
targetSumPair (int arr[], int n, int target)
{

  sort (arr, arr + n);
  int i = 0, j = n - 1, sum;
  while (i < j)
    {
      sum = arr[i] + arr[j];
      if (sum > target)
	{
	  j--;
	}
      if (sum < target)
	{
	  i++;
	}
      if (sum == target)
	{
	  cout << arr[i] << " and " << arr[j] << endl;
	  i++; j--;
	}
    }
  return;
}

int main ()
{
  int arr[100], n, target;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  cin >> target;
  targetSumPair (arr, n, target);


}
