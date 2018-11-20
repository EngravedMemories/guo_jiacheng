#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned int rollDice()
{
    unsigned int die1= 1+rand() %6;
    unsigned int die2= 1+rand() %6;
    unsigned int sum= die1 + die2;
    cout <<"Play rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}

unsigned int roll()
{
    enum Status {continue, won, lost};
    srand(static_cast<unsigned int>(time(0)));
    unsigned int myPoint =0;
    Status gameStatus = continue;
    unsigned int sumOfDice = rollDice();
}

int main()
{
    unsigned int bankBalance = 1000, wager =0;
    cout <<"Enter wager: ";
    cin >>wager;
    while(wager>bankBalance)
    {
        cout <<"Attention! Enter wager again: ";
        cin >>wager;
    }

    while(wager<=bankBalance)
    {
        roll();
    }

    switch(sumOfDice)
    {
    case 7:
    case 11:
        gameStatus = won;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = lost;
        break;
    default:
        gameStatus = continue;
        myPoint = sumOfDice;
        cout<<"Point is"<<myPoint<<endl;
        break;
    };

    while(continue==gameStatus)
    {
        sumOfDice = rollDice();

        if(sumOfDice == myPoint)
            gameStatus = won;
        else if(sumOfDice == 7)
            gameStatus = lost;
    }
    if(won == gameStatus)
       {
           cout <<"Player wins."<<endl;
           bankBalance+=wager;
           cout <<"Bank Balance is: "<<bankBalance<<endl;
       }

    else
        {
            cout <<"Player loses."<<endl;
            bankBalance-=wager;
           cout <<"Bank Balance is: "<<bankBalance<<endl;
           if(bankBalance==0)
            cout<<"Sorry. You busted!";
        }

    return 0;
}
