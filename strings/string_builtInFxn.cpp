#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "INDIA WON THE 2026 ICC MEN'S T20 WORLD CUP";
    int size = str.size();
    cout<<"Size of string is: "<<size<<"\n";
    int length = str.length();
    cout<<"length of string is: "<<length<<"\n";
    str.push_back('a');
    cout<<str<<"\n";
    str.pop_back();
    cout<<str<<"\n";
    str = "Congratulations "+str;
    cout<<str<<"\n";
    str = str + '!';
    cout<<str<<"\n";
    reverse(str.begin(),str.end());
    cout<<str;
}