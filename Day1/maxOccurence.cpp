#include <bits/stdc++.h>
using namespace std;
char MaxOccurrence(string s){
    char res;
    int max = 0;
    char sec;
    int secMax = 0;
    unordered_map<char,int> freq;
    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
        if(s[i]==' '){
            continue;
        }
        if(freq[s[i]] > max){
            res = s[i];
            max = freq[s[i]];
        }else if(freq[s[i]] > secMax && s[i] != res){
            secMax = freq[s[i]];
            sec = s[i];
        }
    }
    return sec;
}
int main()
{
    string res = "aaaaaaabbbbbcccccc";
    cout << MaxOccurrence(res);
    return 0;
}