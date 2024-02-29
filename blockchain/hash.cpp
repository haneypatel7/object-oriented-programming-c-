#include<iostream>
using namespace std;
#include<functional>
#include<iomanip>
#include<string>
#include<ctime>
int main()
{
    int number1;
    cout<<"enter number to generate hash"<<endl;
    cin>>number1;

    //to get hash value of integer value
    hash<int>get_hash;
    size_t result1=get_hash(number1);
    cout << "Hash is: " << hex << setw(8) << setfill('0') << result1 << endl;


    //to get currenttime of create block

    time_t currtime=time(NULL);
    string result_time=ctime(&currtime);

    cout<<"time stamp is:"<<result_time<<endl;


    unsigned int result2=get_hash(result_time);

    unsigned int finalresult=result1+result2;
    cout<<"final hash of block data is"<<finalresult;



    return 0;
}