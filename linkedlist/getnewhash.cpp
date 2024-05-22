#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string gethash(string &input)
{
    
    string s1="UH7H5B7gh54ssA";
    string s2="uhasdybdfjbdhi";
    string hashval;

    for( char c: input)
    {
        hashval=to_string(c);
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
    string r2=gethash(input);
    cout<<r2;
    return 0;
}