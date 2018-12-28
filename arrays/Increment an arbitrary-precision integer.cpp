/*
Write a program which takes as input an array of digits encoding a nonnegative decimal integer D and updates the array to represent the 
integer D+1. 
For example:
input: {1,2,9}
output should be : {1,3,0}
*/

vector<int> increment(vector<int> &A)
{
    int i,j;
    A[A.size()-1] +=1;
    for(i=A.size()-1; i > 0 && A[i]==10; i--)
    {
        A[i]=0;
        A[i-1]++;
    }
    if(A[0]==10)
    {
        A[0]=1;
        A.emplace_back(0);
    }
    return A;
}
