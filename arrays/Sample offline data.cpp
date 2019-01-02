/*
Implement an algorithm that takes as input an array of distinct elements and a size, and returns a subset of the given size of the array 
elements. All subsets should be equally likely. Return the result in input array itself.
*/

vector<int> offline(vector<int> &A, int k)
{
    int i, min=0, max=A.size()-k+1;
    srand(time(NULL));
    int randNum = rand()%(max-min + 1) + min;
    for(i=0; i<k; i++)
    {
        A[i]=A[randNum];
        randNum++;
    }
    A.erase(A.begin()+k, A.end());
    return A;
}
