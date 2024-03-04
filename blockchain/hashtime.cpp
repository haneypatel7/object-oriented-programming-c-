#include<iostream>
using namespace std;
#include<functional>
#include<iomanip>
#include<string>
#include<ctime>
#include<fstream>
int main()
{

    time_t itt=time(NULL);
    string insert_time=ctime(&itt);
    cout<<"time is:"<<insert_time<<endl;

    hash<string>gethash;
    hash<unsigned int>gethash2;

    unsigned int result1=gethash(insert_time);

    int data=12;
    unsigned int result2=gethash2(data);


    unsigned result3=result1+result2;
    cout<<result1<<endl;
    cout<<result2<<endl;
    cout<<result3<<endl;

    ofstream output("result.txt");
    output<<result1;




    return 0;
}