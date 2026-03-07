#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e' || str[i] == 'a'||
             str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'E' || str[i] == 'A' )
        {
            count++;
        }
        

    }
    cout<<"Number of Vowels in Entered String is: "<<count;
    
    

    return 0;
}