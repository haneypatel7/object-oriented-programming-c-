#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string gethash(string &input)
{
    
    string s1="XNH6XHA";
    string s2="74HDBCY";

    string hashval;

    for(char c : input)
    {
        hashval+=to_string(c);
        hashval+=s1;
        hashval+=s2;
        reverse(hashval.begin(),hashval.end());

    }

    return hashval;

}

int main()
{
    string input;
    cout<<"enter data"<<endl;
    cin>>input;
    string res=gethash(input);
    cout<<res;

    return 0;
}