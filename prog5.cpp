#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="apple";
    string str2="banana";
    int result=str.compare(str2);
    if(result==0){
        cout<<"String are equal."<<endl;
    }
    else if(result<0)
        {
        cout<<str1<<"comes before"<<str2<<"lexicographically."<<endl;
    }else
    {
    cout<<str1<<"comes after"<<str2<<"lexicographically."<<endl;
    }
    return 0;
}
