#Input: [-4,-1,0,3,10]
#Output: [0,1,9,16,100]

class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        for i in range(0,len(A)):
            A[i]*=A[i]
        A.sort()
        return A
        