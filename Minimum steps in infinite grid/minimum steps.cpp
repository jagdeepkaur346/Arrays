/*
You are in an infinite 2D grid where you can move in any of the 8 directions :
 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.
Input :
Given two integer arrays A and B, where A[i] is x coordinate and B[i] is y coordinate of ith point respectively.
*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int size, size2;
    size= A.size();
    size2 =2;
    int C[size][size2];
    int i,result;
    result=0;
    for(i=0; i< size; i++)
    {
        C[i][0]= A[i];
        C[i][1]= B[i];
    }
    for(i=0; i<size-1; i++)
    {
        int x, y;
        x = abs(abs(C[i][0]) - abs(C[i+1][0]));
        y = abs(abs(C[i][1]) - abs(C[i+1][1]));
        if(x>y)
        {
            result += x;
        }
        else
        {
            result += y;
        }
        i++;
    }
    return result;    
}
