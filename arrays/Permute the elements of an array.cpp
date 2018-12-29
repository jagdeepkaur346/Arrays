/*
A permutation can be specifed by an array P, where P[i] represents the location of the element at i in the permutation.
For example:
A ={1,2,3,4}
P= {2,0,1,3}
Output should be {2,3,1,4}
*/
vector<int> permute(vector<int> &P, vector<int> &A)
{
    int i;
    vector<int> result;
    result = A;
    for(i=0; i<P.size(); i++)
    {
        if(P[i]!= i)
        {
            result[P[i]]=A[i];
        }
    }
    return result;
}
