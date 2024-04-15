#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

string gethash(string &input)
{
    
    string res="XAN348N9";
    
    string test2="BCDG7EJ";
    string hashval;
    for(char c : input)
    {
        //hashval=to_string(c)+res+test2;
        hashval=to_string(c);
        hashval+=res;
        hashval+=test2;
        reverse(hashval.begin(), hashval.end());
        hashval+=input;
    }
    return hashval;
}
int main() {
    string input;
    cout<<"enter string"<<endl;
    cin>>input;
    
    string res=gethash(input);
    cout<<res;
    return 0;
}