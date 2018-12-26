/*
Given a number N, find all factors of N.

Example:

N = 6 
factors = {1, 2, 3, 6}
Make sure the returned array is sorted.
*/

vector<int> Solution::allFactors(int A) {
    vector<int> result;
    int i;
    for(i=1; i<= sqrt(A); i++)
    {
        if(A%i==0)
        {
            result.push_back(i);
            if(i!=sqrt(A))
            {
            result.push_back(A/i);
            }
        }
        
    }
    sort(result.begin(), result.end());
    return result;
}
