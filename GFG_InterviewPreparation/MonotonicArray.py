'''
An array A is monotone increasing if for all i <= j, A[i] <= A[j].  
Array A is monotone decreasing if for all i <= j, A[i] >= A[j].
Return "true" if A is monotonic.
'''
class Solution:
    def isMonotonic(self, A: List[int]) -> bool:
        res = False
        if(len(A)<=2):
            return True
        for i in range(0,len(A)-1):
            if(A[i+1]==A[i]):
                if(i==len(A)-3):
                    return True
                continue
            if(A[i+1]>=A[i]):
                for j in range(i+1,len(A)-1):
                    if(A[j+1]>=A[j]):
                        if(j==len(A)-2):
                            return True
                    else:
                        return False
            if(A[i+1]<=A[i]):
                for j in range(i+1,len(A)-1):
                    if(A[j+1]<=A[j]):
                        if(j==len(A)-2):
                            return True
                    else:
                        return False      
                    