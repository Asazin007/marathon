#include <iostream>
#include "./Bill_n_Budget.h"
using namespace std;
int main(){
    // declaration of objeect
    Electricity e;
    int sanctionLoad;
    int electricityslab;
    long int presentReading;
    long int previousReading;
    long int Consumption;
    cout<<"Enter Values: "<<endl;
    cout<<"Enter sanction load: "<<endl;
    cin>>sanctionLoad;
    cout<<"Enter Elec slab: "<<endl;
    cin>>electricityslab;
    cout<<"Enter Present Red: "<<endl;
    cin>>presentReading;
    cout<<"Enter Previous: "<<endl;
    cin>>previousReading;
    cout<<"Consumption: "<<endl;
    cin>>Consumption;

    e.accept(sanctionLoad,electricityslab,presentReading,previousReading,Consumption);//pass by value

    e.display();

    //setters , you can set values
    // e.set_Consumption(1288);
    // e.set_electricityslab(2222);
    


// bill calculation
    float Bill=e.calculateElectricityBill();
    std::cout<<"Total Bill: "<<Bill<<std::endl;
    


    
return 0;
}