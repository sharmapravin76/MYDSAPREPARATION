#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isanagram(string s1,string s2)
{
    vector<int>freq(26,0);
    if(s1.length()!=s2.length())
    {
        return false;

    }
// store frequency of characters in s1 and s2
    for(int i=0;i<s1.length();i++)
    {
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;

    }
    // checking if freq of every character is 0
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    if(isanagram(s1,s2)){
        cout<<"strings are anagrams"<<endl;
    }
    else{
        cout<<"strings are not anagrams"<<endl;
    }
    return 0;
}

// tc-O(length of string)
// sc-O(1)