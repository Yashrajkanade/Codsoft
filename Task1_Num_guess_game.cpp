#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int num = rand()%100;
    int guess;
    cout<<"Can you guess the number between 0-100.\n";
    while(true)
    {
        cout<<"Enter the guess:";
        cin>>guess;
        if(num==guess)
        {
            cout<<"You guessed it right!!!";
            break;
        }
        else if (num>guess)
        {
            cout<<"Guess a number larger than "<<guess<<endl;
        }
        else
        {
            cout<<"Guess a number smaller than "<<guess<<endl;;
        }
    }
    return 0;
}