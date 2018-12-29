/*
Write a program which takes as input a sorted array and updates it so that all duplicates have been removed and the remaining elements have
been shifted left to fill the emptied indices. Return the number of valid elements.
For example:
for input A={2,3,5,5,7,11,11,11,13}
output = 6
*/
int duplicatesDeletion(vector<int> &A)
{
   int i,index=1;
   for(i=1; i<A.size(); i++)
   {
       if(A[index-1]!=A[i])
       {
           A[index]=A[i];
           index++;
       }
   }
   
   return index;
}
