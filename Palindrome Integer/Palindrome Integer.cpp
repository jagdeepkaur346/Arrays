/*
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :
Input : 12121
Output : True
Input : 123
Output : False
*/

int Solution::isPalindrome(int A) {
    int y=0;
    int x = A;
    while(A>0)
    {
        y = (y*10) + (A%10);
        A = A/10;
    }
    if(x==y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
