// #include<iostream>
// using namespace std;
// int string_to_int(string s)
// {
//     // this function converts string to integer
//      if(s.size()==1)return s[0]-'0'; //'9'-'0'
//     return (s[0]-'0')*10+(s[1]-'0');//"26"->('2'-'0')*10+('6'-'0')
// }
// int main(){
//     cout<<string_to_int("12");
//     return 0;
// }
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> dp;
    
    // This function takes a string of digits and converts it to a number
    int string_to_int(string s) {
        // This function converts string to integer
        if (s.size() == 1) return s[0] - '0'; // '9'-'0'
        return (s[0] - '0') * 10 + (s[1] - '0'); // "26" -> ('2'-'0')*10 + ('6'-'0')
    }

    int f(string str, int idx) {
        // Base case
        if (str[idx] == '0') return 0;
        if (idx >= str.size()) return 0;
        if (idx == str.size() - 1) {
            if (str[idx] == '0') return 0;
            else return 1;
        }
        if (idx == str.size() - 2) {
            bool can_form_2_digits = string_to_int(str.substr(idx, 2)) <= 26;
            return can_form_2_digits + f(str, idx + 1);
        }
        if (dp[idx] != -1) return dp[idx];
        bool can_form_2_digits = string_to_int(str.substr(idx, 2)) <= 26;
        return dp[idx] = f(str, idx + 1) + ((can_form_2_digits) ? f(str, idx + 2) : 0);
    }

    int numDecodings(string s) {
        dp.clear();
        dp.resize(105, -1);
        return f(s, 0);
    }
};

int main() {
    Solution solution;
    string s = "226"; // Example input
    cout << "Number of ways to decode \"" << s << "\": " << solution.numDecodings(s) << endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//      Solution Solution;
//      string s="226";
//     //  cout<<"number of ways\"<<s<<"\":"<<Solution.numdecoding(s)<<endl;
//      cout << "Number of ways \"" << s << "\": " << Solution.numDecodings(s) << endl;
//     return 0;
// }


// class Solution {
// public:
// vector<int>dp;
// //this function takes a string of digits and convert it to a number 
// int string_to_int(string s)
// {
//     // this function converts string to integer
//     if(s.size()==1)return s[0]-'0'; //'9'-'0'
//     return (s[0]-'0')*10+(s[1]-'0');//"26"->('2'-'0')*10+('6'-'0')
// }
// int f(string str,int idx)
// {
//     //base case
//     if(str[idx]=='0')return 0;
//     if(idx>=str.size())return 0;
//     if(idx==str.size()-1)
//     {
//     if(str[idx]=='0')return 0;
//     else return 1;
//     }
//     if(idx==str.size()-2)
//     {
//         bool can_form_2_digits=string_to_int(str.substr(idx,2))<=26;
//          return can_form_2_digits+f(str,idx+1);
//     }
//     if(dp[idx]!=-1) return dp[idx];
//     bool can_form_2_digits=string_to_int(str.substr(idx,2))<=26;
//     return dp[idx]=f(str,idx+1)+((can_form_2_digits)?f(str,idx+2) : 0);
// }
//     int numDecodings(string s) {
//         dp.clear();
//         dp.resize(105,-1);
//         return f(s,0);
//     }
// };