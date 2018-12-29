/*
Write a program that takes two arrays representing integers, and returns an integer representing their product.
For example:
A= {-1,2} and B = {2,3}
Output ahould be {-2, 7, 6}
*/

vector<int> multiply(vector<int> &A, vector<int> &B)
{
    int i, j, count=0;
    if(A[0]<0)
    {
        A[0]= abs(A[0]);
        count++;
    }
    if( B[0] <0)
    {
        B[0]= abs(B[0]);
        count++;
    }
    vector<int> result(A.size()+B.size(),0);
    for(i=B.size()-1; i>-1; i--)
    {
        int reSize = result.size()-1;
        result[reSize] += (B[i]*A[A.size()-1])%10;
        for(j=A.size()-2; j>-1; j--)
        {
            reSize--;
            result[reSize] += ((B[i]*A[j])%10) + ((B[i]*A[j+1])/10);
        }
        A.emplace_back(0);
    }
    result = {find_if_not(result.begin(), result.end(), [](int a) {return a==0;}), end(result)};
    if(count==1)
    {
        result[0]= -1*result[0];
    }
    return result;
}
