#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,num;
    cout <<"Enter the Values : ";
    cin >>a;
    cin >>b;
    cout <<"Before Swapping :";
    cout << "\na = "<<a<<"\nb = "<<b;
    num = a;
    a = b;
    b = num;
    cout <<"\nAfter Swapping :";
    cout <<"\na = "<<a<<"\nb = "<<b;
    getch();

}
