#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Input a character from (a, b, c, d): ";
    cin>>ch;

    if (ch=='a')
    {
        cout<<"Good Morning"<<endl;
    }
    else if (ch=='b')
    {
        cout<<"Good Afternoon"<<endl;
    }
        else if (ch=='c')
    {
        cout<<"Good Evening"<<endl;
    }
        else if (ch=='d')
    {
        cout<<"Good Night"<<endl;
    }
   
    else{
        cout<<"Good day !"<<endl;
    }
    
    return 0;
}