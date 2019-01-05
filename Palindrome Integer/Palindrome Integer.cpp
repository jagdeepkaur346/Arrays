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
    string s = to_string(A);
    int i,j=0;
    if(s.size()==2)
    {
        if(s[0]==s[1])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
    for (i=s.size()-1; i>s.size()/2; i--)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }
        j++;
    }
    return 1;
    }
}
