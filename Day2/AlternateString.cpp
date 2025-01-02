#include <bits/stdc++.h>
using namespace std;
string Merge(string s1,string s2){
    int left = 0;
    int right = 0;
    string ans;
    while(left < s1.size() && right < s2.size())
    {
        ans.push_back(s1[left++]);
        ans.push_back(s2[right++]);
    }
    while(left < s1.size())
    {
        ans.push_back(s1[left++]);
    }
    while(right < s2.size())
    {
        ans.push_back(s2[right++]);
    }
    return ans;
}
int main()
{
    string s1 = "ABC";
    string s2 = "PQRS";
    string ans = Merge(s1,s2);
    cout <<"Merging of two string: " <<ans;
}