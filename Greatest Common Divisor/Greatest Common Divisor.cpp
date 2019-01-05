/*
Given 2 non negative integers m and n, find gcd(m, n).

Example
m : 6
n : 9
GCD(m, n) : 3 
*/

int Solution::gcd(int A, int B) {
    int i;
    if(A!=0 && B!= 0)
    {
        i = min(A,B);
        while(i>0)
        {
            if((A%i)==0 && (B%i)==0)
            {
                return i;
            }
        i--;
        }
    }
    else
    {
        return max(A,B);
    }
}
