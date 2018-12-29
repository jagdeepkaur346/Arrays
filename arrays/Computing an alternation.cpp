/*
Write a program that takes an array A of n numbers and rearranges A's elements to get a new array B having the property that 
B[0]<= B[1] >= B[2] <= B[3] >= B[4].......

*/

vector<int> alteration(vector<int> &A)
{
   sort(A.begin(), A.end());
   int i;
   for(i=1; i<A.size()-1; i+=2)
   {
       int temp;
       temp=A[i];
       A[i]=A[i+1];
       A[i+1]=temp;
   }
   return A;
 }
