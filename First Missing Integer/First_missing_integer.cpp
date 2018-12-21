/*
Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1
*/

int Solution::firstMissingPositive(vector<int> &A) {
    int i;
    sort(A.begin(), A.end());
    if(A[0]>0 && A[0] != 1)
    {
        return 1;
    }
    for(i=0; i<A.size(); i++)
    {
        if(A[i] <= 0 && A[i+1] > 0 && A[i+1]!= 1 || A[i]<0 && i==A.size()-1)
        {
            return 1;
        }
        if(A[i+1]!= A[i]+1 && A[i]>0)
        {
               return A[i]+1;
        }
        
    }
