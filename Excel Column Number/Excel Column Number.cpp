/*
Given a column title as appears in an Excel sheet, return its corresponding column number.

Example:

    A -> 1
    ...  
    Z -> 26
    
    AA -> 27   
    AB -> 28 
    
 */
 int Solution::titleToNumber(string s) {
    int result = 0;
       for (int
       i = 0; i < s.size(); i++) {
               result  = result * 26 + (s[i] - 'A' + 1);
       }
       return result;

}

