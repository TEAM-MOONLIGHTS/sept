#include <iostream>
using namespace std;

int main() 
{
    double amount,total_amount;
    cout<<"Enter amount of purchase:";
    cin>>amount;
    
    if (amount<100)
    {
        total_amount=amount*0.98;
        cout<<"total_amount:"<<total_amount;
    }    
        else if (amount>=100 && amount<500)
        {
            total_amount=amount*0.95;
            cout<<"total_amount:"<<total_amount;
        }        
            else if (amount>=500)
            {
                total_amount=amount*0.9;
                cout<<"total_amount:"<<total_amount;
            }        
    else
    {
        cout<<"error";       
    }
    return 0;
}