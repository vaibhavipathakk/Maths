/*
67. Add Binary
Easy

Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/


class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int i = a.length()-1;
        int j = b.length()-1;
        int carry = 0;
        int sum =0;
        while(i>=0 || j>=0){
            sum = carry;
            if(i>=0){
                sum+= a[i--]-'0';
            }
            if(j>=0){
                sum+= b[j--]-'0';
            }
            
            carry = sum>1 ? 1:0;
            s += to_string(sum%2);
        
        }
        if(carry!=0){
            s += to_string(carry);
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};
