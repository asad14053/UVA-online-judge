#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        char b[100];
        map<char,int>mp;
        int k=0;
        for(int i=0; i<s.size(); i++)
            mp[tolower(s[i])]++;
        //cout<<mp.size()<<endl;
        int l=0;
        for(int i=96; i<124; i++)
        {
            if(mp[i])
            cout<<(char)i<<"="<<mp[(char)i]<<endl;
        }

    }return 0;
    }



