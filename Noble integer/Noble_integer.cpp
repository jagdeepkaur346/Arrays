/*
Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
If such an integer is found return 1 else return -1.
*/
int Solution::solve(vector<int> &A) {
    
    int i, j,p, result;
    vector<int> array;
    for(i=0; i<A.size(); i++)
    {
        p=A[i];
        for(j=0; j<A.size(); j++)
        {
            if(A[j]>p)
            {
                array.push_back(A[j]);
            }
        }
        if(array.size()==p)
        {
            return 1;
        }
        else
        {
            array.clear();
        }
      }
    return -1;    
}
