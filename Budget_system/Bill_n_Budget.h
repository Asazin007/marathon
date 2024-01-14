#ifndef BILL_N_BUDGET_H
#define BILL_N_BUDGET_H

#include <iostream>
//class initialization
class Electricity
{
private:
    int sanctionLoad;
    int electricityslab;
    long int presentReading;
    long int previousReading;
    long int Consumption;
    
public:
    Electricity();// default constructor

    //setters for indivisual data members
    void set_sanctionLoad(int sanctionLoad);
    void set_electricityslab(int electricityslab);
    void set_presentReading(long int presentReading);
    void set_previousReading(long int previousReading);
    void set_Consumption(int Consumption);

    //getter of every Data mem
    int get_sanctionLoad();
    int get_electricityslab();
    long int get_presentReading();
    long int get_previousReading();
    long int get_Consumption();

    


    float calculateElectricityBill();
    void accept(int,int ,long int, long int,long int);
    void display();

};





#endif // BILL_N_BUDGET_H
