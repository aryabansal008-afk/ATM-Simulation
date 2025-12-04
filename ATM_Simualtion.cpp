#include<iostream>
using namespace std;
int main(){
const int dayb = 5000;
const int cpin = 7075;
int amount,balance;
cout<<"Insert the card\n";
cout<<"-----\n";
cout<<"Enter your pin\n";
int pin;
cin>> pin;
if (pin!=cpin){cout<< "Incorrect PIN.\nTry again";}
else {
cout<<"Your current balance is 70000\n";
cout<<"Enter amount to withdraw:";
cin>> amount;
if(amount<=70000)
if(amount<=dayb) 
    if(amount % 500 ==0)
cout<<"Withdrawal Successful";
else cout<<"Enter in multiple of 500";

else cout<<"Daily limit exceeded";

else cout<<"Insufficient Balance";}

return 0;
}