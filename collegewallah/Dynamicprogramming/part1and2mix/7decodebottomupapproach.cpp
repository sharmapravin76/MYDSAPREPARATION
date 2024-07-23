// answer is in leetcode


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
// int fbu(string str){
//     dp.clear();
//     dp.resize(105,0);
//     int n=str.size();
//     dp[n-1]=(str[n-1]=='0')?0:1;
//          bool can_form=string_to_int(str.substr(n-2,2))<=26;
//          if(str[n-2]=='0')dp[n-2]=0;
//          else dp[n-2]=dp[n-1]+(can_form);

//     for(int i=n-3;i>=0;i--)
//     {
//         if(str[i]=='0')
//         {
//             dp[i]=0;
//             continue;
//         }
//          bool can_form_2_digits=string_to_int(str.substr(i,2))<=26;
//          dp[i]=dp[i+1]+((can_form_2_digits)?dp[i+2]:0);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<dp[i]<<" ";
//     }
//     return dp[0];
// }
//     int numDecodings(string s) {
//         // dp.clear();
//         // dp.resize(105,-1);

//         //here single length handled
//         int n=s.size();
//         if(n==1)
//         {
//             if(s[n-1]=='0')return 0;
//             else return 1;

//         }
        
//         return fbu(s);
//     }
// };



//DRY RUN FOR ME 





// Sure, let's break down and explain the given code step by step using the example string "1123".

// Code Overview
// The code is solving the problem of counting the number of ways to decode a string of digits where '1' to '26' map to 'A' to 'Z'.

// Definitions
// dp: Dynamic programming array to store the number of ways to decode substrings of str.
// Function fbu
// Initialization
// cpp
// Copy code
// dp.clear();
// dp.resize(105, 0);
// dp is cleared and resized to 105 zeros.
// Size of the Input String
// cpp
// Copy code
// int n = str.size();
// n is the length of str. For "1123", n = 4.
// Handling the Last Character
// cpp
// Copy code
// dp[n-1] = (str[n-1] == '0') ? 0 : 1;
// For str = "1123", str[3] = '3', which is not '0', so dp[3] = 1.
// Handling the Second Last Character
// cpp
// Copy code
// bool can_form = string_to_int(str.substr(n-2, 2)) <= 26;
// if (str[n-2] == '0') dp[n-2] = 0;
// else dp[n-2] = dp[n-1] + (can_form);
// str.substr(2, 2) = "23", string_to_int("23") = 23, which is <= 26, so can_form = true.
// str[2] = '2' is not '0', so dp[2] = dp[3] + 1 = 1 + 1 = 2.
// Loop for Remaining Characters
// cpp
// Copy code
// for (int i = n-3; i >= 0; i--) {
//     if (str[i] == '0') {
//         dp[i] = 0;
//         continue;
//     }
//     bool can_form_2_digits = string_to_int(str.substr(i, 2)) <= 26;
//     dp[i] = dp[i+1] + ((can_form_2_digits) ? dp[i+2] : 0);
// }
// For i = 1:

// str[1] = '1', not '0'.
// str.substr(1, 2) = "12", string_to_int("12") = 12, which is <= 26, so can_form_2_digits = true.
// dp[1] = dp[2] + dp[3] = 2 + 1 = 3.
// For i = 0:

// str[0] = '1', not '0'.
// str.substr(0, 2) = "11", string_to_int("11") = 11, which is <= 26, so can_form_2_digits = true.
// dp[0] = dp[1] + dp[2] = 3 + 2 = 5.
// Print dp Array
// cpp
// Copy code
// for (int i = 0; i < n; i++) {
//     cout << dp[i] << " ";
// }
// This prints: 5 3 2 1
// Return Result
// cpp
// Copy code
// return dp[0];
// Returns dp[0], which is 5.
// Function numDecodings
// cpp
// Copy code
// int numDecodings(string s) {
//     int n = s.size();
//     if (n == 1) {
//         if (s[n-1] == '0') return 0;
//         else return 1;
//     }
//     return fbu(s);
// }
// For a single character string, if it's '0', return 0. Otherwise, return 1.
// For strings longer than 1, it calls fbu.
// Dry Run Summary for "1123"
// Initialization: dp = [0, 0, 0, 1]
// Step 1: dp[3] = 1
// Step 2: dp[2] = dp[3] + 1 = 2
// Step 3: dp[1] = dp[2] + dp[3] = 3
// Step 4: dp[0] = dp[1] + dp[2] = 5
// Thus, there are 5 ways to decode "1123".













// Let's dry run the numDecodings method for the input string "106" using the provided code.

// Initialization
// cpp
// Copy code
// dp.clear();
// dp.resize(105, 0);
// Clear and resize the dp array to 105 elements, all initialized to 0.
// Step-by-Step Dry Run for "106"
// cpp
// Copy code
// int n = str.size();
// n = 3 (the length of the input string "106").
// cpp
// Copy code
// dp[n-1] = (str[n-1] == '0') ? 0 : 1;
// dp[2] = (str[2] == '0') ? 0 : 1
// str[2] = '6', which is not '0', so dp[2] = 1.
// Process the Second Last Character
// cpp
// Copy code
// bool can_form = string_to_int(str.substr(n-2, 2)) <= 26;
// if (str[n-2] == '0') dp[n-2] = 0;
// else dp[n-2] = dp[n-1] + (can_form);
// str.substr(1, 2) = "06"
// string_to_int("06") = 6, which is <= 26, so can_form = true.
// str[1] = '0', so dp[1] = 0.
// Process Remaining Characters
// cpp
// Copy code
// for (int i = n-3; i >= 0; i--) {
//     if (str[i] == '0') {
//         dp[i] = 0;
//         continue;
//     }
//     bool can_form_2_digits = string_to_int(str.substr(i, 2)) <= 26;
//     dp[i] = dp[i+1] + ((can_form_2_digits) ? dp[i+2] : 0);
// }
// For i = 0
// str[0] = '1', which is not '0'.
// str.substr(0, 2) = "10"
// string_to_int("10") = 10, which is <= 26, so can_form_2_digits = true.
// dp[0] = dp[1] + dp[2] = 0 + 1 = 1.
// Final dp Array
// After processing, the dp array looks like this: [1, 0, 1].
// Return Result
// cpp
// Copy code
// return dp[0];
// dp[0] = 1
// So, the number of ways to decode the string "106" is 1.

// Explanation
// The string "106" can only be decoded in one way:
// "10" -> "J" and "6" -> "F", so the decoded string is "JF".
// string_to_int("06") = 6 how
// ChatGPT
// The expression string_to_int("06") = 6 is a bit of an oversimplification. The correct behavior of converting a string with leading zeros to an integer is dependent on how the conversion function is implemented.

// In C++, you can convert a string to an integer using std::stoi, which handles leading zeros correctly by ignoring them. Here's how it works:

// cpp
// Copy code
// int string_to_int(const std::string& str) {
//     return std::stoi(str);
// }
// When you call string_to_int("06"), it uses std::stoi internally, which parses the string and converts it to the integer value 6, ignoring the leading zero.

// Detailed Dry Run for "106"
// Let's dry run the code with string_to_int function properly understood:

// Initialization:

// cpp
// Copy code
// dp.clear();
// dp.resize(105, 0);
// int n = str.size();
// Set the last element in dp:

// cpp
// Copy code
// dp[n-1] = (str[n-1] == '0') ? 0 : 1;
// str[2] = '6', so dp[2] = 1.
// Handle the second last character:

// cpp
// Copy code
// bool can_form = string_to_int(str.substr(n-2, 2)) <= 26;
// if (str[n-2] == '0') dp[n-2] = 0;
// else dp[n-2] = dp[n-1] + (can_form);
// str.substr(1, 2) = "06"
// string_to_int("06") = 6 (ignores the leading zero)
// 6 <= 26 so can_form = true.
// str[1] = '0', so dp[1] = 0.
// Process remaining characters:

// cpp
// Copy code
// for (int i = n-3; i >= 0; i--) {
//     if (str[i] == '0') {
//         dp[i] = 0;
//         continue;
//     }
//     bool can_form_2_digits = string_to_int(str.substr(i, 2)) <= 26;
//     dp[i] = dp[i+1] + ((can_form_2_digits) ? dp[i+2] : 0);
// }
// For i = 0:
// str[0] = '1', which is not '0'.
// str.substr(0, 2) = "10"
// string_to_int("10") = 10
// 10 <= 26 so can_form_2_digits = true.
// dp[0] = dp[1] + dp[2] = 0 + 1 = 1.
// Final dp Array:

// dp = [1, 0, 1]
// Return Result:

// cpp
// Copy code
// return dp[0];
// dp[0] = 1
// Conclusion:
// The number of ways to decode "106" is 1


// Conclusion
// The number of ways to decode the string "106" is 1.
// "10" -> "J"
// "6" -> "F"
// The decoded string is "JF".
// Therefore, the correct result is that there is only 1 way to decode "106"