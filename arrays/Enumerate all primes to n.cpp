/*
Write a program that takes an integer argument and returns all the primes between 1 and that integer.
For example:
If input is 18
Output= {2,3,5,7,11,13,17}
*/

vector<int> primes(int a)
{
    vector<int> result;
    vector<bool> check(a+1,1);
    check[0]=0;
    check[1]=0;
    int i, j;
    i=2;
    while(i<a )
    {
        if(check[i]==1)
        {
            result.push_back(i);
            for(j=i; j<check.size(); j+=i)
            {
                check[j]=0;
            }
        }
        i++;
    }
    return result;
}
