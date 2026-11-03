//mobile phone sales receipt system
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    string customerName;
    string phoneModel;
    int quantityBought;
    double pricePerPhone;

    cout<<"Enter customerName:";
    getline(cin,customerName);

    cout<<"Enter phoneModel:";
    getline(cin,phoneModel);

    cout<<"Enter quantityBought:";
    cin>>quantityBought;

    cout<<"Enter pricePerPhone:";
    cin>>pricePerPhone;

    double totalSales= quantityBought * pricePerPhone;

    cout<<"fixed<<setprecision(2)endl";
    cout<<"/n====Sales Receipt====/n";
    cout<<"customer:"<<customerName<<'endl';
    cout<<"phonemodelpurchased:"<<phoneModel<<'endl';
    cout<<"quantity:"<<quantityBought<<'endl';
    cout<<"price:"<<pricePerPhone<<'endl';
    cout<<"sales:"<<totalSales<<'endl';

    return 0;

}
