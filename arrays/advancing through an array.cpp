/*
Write a program which takes an array of n integers, where A[i] denotes the maximum you can advance from index i, and returns whether it is 
possible to advance to the last index starting from the begining of the array.
For example
1. If input is A = {3,3,1,0,2,0,1} then output should be 1.
2. If input is A = {3,2,0,0,2,0,1} then output should be 0.
*/

bool advancing(vector<int> &A)
{
    int i=0;
    if(A[0]==0)
    {
        return 0;
    }
    while(i<A.size()-1)
    {
        if(A[i+A[i]]==0 && A[i+1]==0)
        {
            return 0;
        }
        else if(A[i+A[i]]==0 && A[i]>1)
        {
            i=i+1;
        }
        else 
        {
            i=i+A[i];
        }
    }
    return 1;
}
