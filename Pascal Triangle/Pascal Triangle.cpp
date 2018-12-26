/*
Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]
*/

vector<vector<int> > Solution::solve(int A) {
 
int i,j;

 vector<vector<int> > result;

for(i=0; i< A; i++)
{
    vector<int> array;
    array.push_back(1);
     j=1;
    while(j<i+1)
    {
       if(j==i)
       {
           array.push_back(1);
           break;
       }
       array.push_back(result[i-1][j]+result[i-1][j-1]);
       j++;
    }
    
    result.push_back(array);
}

return result;
}
