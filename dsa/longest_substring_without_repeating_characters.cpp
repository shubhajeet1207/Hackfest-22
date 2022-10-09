#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int lengthOfLongestSubstring(string s) {
    map<char,int> m;
    int i=0,j=0,maxi=0;
    while(j<s.size())
    {
        m[s[j]]++;
        if(m[s[j]]>1)
        {
            while(i<j&&m[s[j]]>1)
            {
                m[s[i]]--;
                i++;
            }
               
        }
        if((j-i+1)>maxi)
            maxi=(j-i+1);
        j++;
    }
    return maxi;
}
int main()
{
	string s;
	cin>>s;
	cout<<lengthOfLongestSubstring(s)<<endl;
}

