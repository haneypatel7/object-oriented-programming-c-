#include<iostream>
using namespace std;
#include<string>
using namespace std;

string getshat(int a){

    string des="AFOIEFBAODHHEC";
    string ret=to_string(a);
    int des2=27239122;
    string res=to_string(des2);
    return to_string(a)+res;

}

int main()
{
    int data;
    cout<<"enter data"<<endl;
    cin>>data;

    string result=getshat(data);
    cout<<result;
    return 0;
}