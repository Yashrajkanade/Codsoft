#include<iostream>
using namespace std;
int main()
{   
    int a,b,c;
    int add,sub,mul,div;
    char response('y');
    do{
    cout<<"\nEnter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"\n 1=Addition \n 2=Subtraction \n 3=Multiplication \n 4=Division \n Enter your choice:";
    cin>>c;
    switch(c)
    {
        case 1:add=a+b;
               cout<<"The Addition is:"<<add;
               break;
        case 2:sub=a-b;
               cout<<"The Subtraction is:"<<sub;
               break;
        case 3:mul=a*b;
               cout<<"The Multiplication is:"<<mul;
               break;
        case 4:div=a/b;
               cout<<"The Division is:"<<div;
               break;
        default:
               cout<<"Wrong choice!!";
    
    }
     cout<<"\nDo you want to continue the operation (Y/N)";
     cin>>response;

    }
    while(response =='Y' || response == 'y');
    return 0;
}