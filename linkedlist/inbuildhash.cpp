
#include<iostream>
#include<ctime>
#include<functional>
#include<iomanip>
using namespace std;

int main()
{

    hash<int>get_hash;
    int number1;
    cout<<"enter number"<<endl;
    cin>>number1;
    size_t result1=get_hash(number1);
    //cout<<hex<<setw(8)<<setfill('0')<<result1;


    

    cout << "Hash is: " << hex << setw(8) << setfill('0') << result1 << endl;

    return 0;
}