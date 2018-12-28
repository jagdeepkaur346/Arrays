/*
Write a program that takes an array A and an index i into A, and rearranges the elements such that all elements less tha A[i](pivot) appear 
first, followed by elements equal to the pivot, followed by elements greater than the pivot
*/

vector<int> flag(vector<int> &A, int i)
{
    int equal, smaller, greater, j;
    equal=0;
    smaller=0;
    greater= A.size()-1;
    sort(A.begin(), A.end());
    while(equal<= greater)
    {
        if(A[equal]<A[i])
        {           
            swap(A[smaller], A[equal]);
            smaller++;
            equal++;
        }
        else if(A[equal]==A[i])
        {
           equal++;
        }
        else if(A[equal]>A[i])
        {
           swap(A[greater], A[equal]);
           greater--;
        }
    }
    return A;
}
