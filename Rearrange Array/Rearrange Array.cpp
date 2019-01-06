/*
Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

Example:
Input : [1, 0]
Return : [0, 1]
*/
void Solution::arrange(vector<int> &A) {

   int i,size;
   size = A.size();
   for(i=0; i<A.size(); i++)
   {
       A[i] += (A[A[i]]% size)*size;
   }
   for(i=0; i<A.size(); i++)
   {
       A[i] = A[i]/size;
   }
   
}
