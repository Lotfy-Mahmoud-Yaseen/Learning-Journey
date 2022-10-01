#include<iostream>
using namespace std;
int main(){
    
    float x, z;
    char sign;
    cout<<"enter the equation sgin";
    cin>>sign;

    cout<<"enter the first and the secound number";
    cin>>x>>z;
    if(sign == '+')
        cout<<"Results ="<<x+z;
    else if(sign == '-')
        cout<<"Results ="<<x-z;
    else if(sign == '*')
        cout<<"Results ="<<x*z;
    else if(sign == '/'){
        if(z==0)
        {
            cout<<"Error division by Zero";
        }
        else
        cout<<"Results ="<<x/z;
    }
    else
    {
        cout<<"Sorry Unknown Operation";
    }

    return 0;
}