/*
Dr. Dhruv is a superb professor of Mathematics. Dr. Dhruv decided to start taking attendance.
There are A students in his class. He has come up with a different method of taking roll call. His method is as follows:

He has a list B of K random integers which means that he will call out only K students.
He will first treat the numbers [1, 2, 3, .., A] as strings [“1”, “2”, “3”, .., “A”]. 
Then he will sort this vector of strings in lexicographic order (see example below). Now, Dr. Dhruv will call the numbers 
which are at B[i]-th (0 <= i < K) position in the sorted order (see example below).

Simply putting, if the sorted order is S, then he will call students in the order { S[B[0] - 1], S[B[1] - 1], …, S[B[K-1] - 1] }.
You need to output the numbers in the sequence that Dr. Dhruv will call.

Constraints:

1 <= K <= 1000  and K <= A
1 <= B[i] <= A (Elements of B may not be distinct, i.e, he can call a student multiple times)
1 <= A <= 99   
*/

vector<int> Solution::solve(int A, vector<int> &B) {
    int i,j;
    vector<int> result;
    for(i=1; i<=9; i++)
    {
        std::stringstream ss1;
        ss1 << i;
        string str1 = ss1.str();
        if(stoi(str1) <= A)
        {
            result.push_back(stoi(str1));
        }
        for(j=0; j<=9; j++)
        {
            std::stringstream ss2;
            ss2 << j;
            string str2 = ss2.str();
            str1.append(str2);
            if(stoi(str1) <= A)
            {
                result.push_back(stoi(str1));
                str1.erase(str1.begin()+1);
            }
            else
            {
                break;
            }
        }
    }
    vector<int> final;
    for(i=0; i<B.size(); i++)
    {
        final.push_back(result[B[i]-1]);
    }
   
    return final;
}
