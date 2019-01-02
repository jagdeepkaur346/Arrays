/*
Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.
If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.
The replacement must be in-place, do not allocate extra memory.

Examples:
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1
20, 50, 113 → 20, 113, 50
*/

void Solution::nextPermutation(vector<int> &A) {
   int i;
    if(A.size()==1)
    {
        return;
    }
    for(i=A.size()-1; i>-1; i--)
    {
        if(A[i]>A[i-1])
        {
            int temp;
            temp=A[A.size()-1];
            A[A.size()-1]=A[i-1];
            A[i-1]=temp;
            sort(A.begin()+i ,A.end());
            return;
        }
        else
        {
            continue;
        }
    }
    sort(A.begin(), A.end());
    return;
}
