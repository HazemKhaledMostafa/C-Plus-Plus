#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin>> a;
    cin>> b;
    for(int n=a; n<=b;n++)
    {
        if(n>=1 && n<=9)
        {
            switch(n)
            {
                case 1: cout<<"one";break;
                case 2: cout<<"two";break;
                case 3: cout<<"three";break;
                case 4: cout<<"four";break;
                case 5: cout<<"five";break;
                case 6: cout<<"six";break;
                case 7: cout<<"seven";break;
                case 8: cout<<"eight";break;
                case 9: cout<<"nine";break;
            }
        }
        else if(n>9 && n%2 == 0)
        {
            cout<<"even";
        }
        else if(n>9 && n%2 != 0)
        {
            cout<<"odd";
        }
        cout<<endl;
    }
    return 0;
}