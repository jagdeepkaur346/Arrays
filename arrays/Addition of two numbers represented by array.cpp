/*
Write a program which takes two input arrays encoding nonnegative decimal intergers D and B, return an array that represents D+B
*/
vector<int> addition(vector<int> &A, vector<int> &B)
{
    
    int i,j, Asize, Bsize;
    Asize = A.size()-1;
    Bsize = B.size()-1;
    while(Asize >-1 || Bsize >-1)
    {
        A[Asize] = A[Asize] + B[Bsize];
        Asize--;
        Bsize--;
    }
    for(i=A.size()-1; i > 0 && A[i] >=10; i--)
    {
        A[i]= A[i]-10;
        A[i-1]++;
    }
    if(A[0]==10)
    {
        A[0]=1;
        A.emplace_back(0);
    }
    return A;
}
