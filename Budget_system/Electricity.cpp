#include <iostream>
#include "./Bill_n_Budget.h"
Electricity::Electricity(){
    sanctionLoad=0;
    electricityslab=0;
    presentReading=0;
    previousReading=0;
    Consumption=0;
}
//setters

void Electricity::set_sanctionLoad(int sanctionLoad){
    this->sanctionLoad=sanctionLoad;
}
void Electricity:: set_electricityslab(int electricityslab){
this->electricityslab=electricityslab;
}
void Electricity:: set_presentReading(long int presentReading){
    this->presentReading=presentReading;
}
void Electricity::set_previousReading(long int previousReading){
    this->previousReading=presentReading;
}
void Electricity:: set_Consumption(int Consumption)
{
    this->Consumption= Consumption;
}

//getters
int Electricity:: get_sanctionLoad(){
    return sanctionLoad;
}
    int Electricity:: get_electricityslab(){
        return electricityslab;
    }
    long int Electricity:: get_presentReading(){
return presentReading;
    }
    long int Electricity:: get_previousReading(){
        return previousReading;

    }
    long int Electricity:: get_Consumption(){
        return Consumption;
    }

    // calculate bill
     float Electricity:: calculateElectricityBill(){
        if(presentReading<previousReading)
        return 0;
        else
        return (float)(sanctionLoad*electricityslab)+((float)(Consumption*electricityslab)/100.0);
    }

void Electricity:: accept(int sanctionLoad,int electricityslab,long int presentReading, long int previousReading,long int Consumption){
    this->sanctionLoad=sanctionLoad;
    this->electricityslab=electricityslab;
    this->presentReading=presentReading;
    this->previousReading=previousReading;
    this->Consumption=Consumption;

}
void Electricity:: display(){
    std::cout<<"Sanction Load: "<<sanctionLoad<<std::endl;
    std::cout<<"Electricity Slab: "<<electricityslab<<std::endl;
    std::cout<<"Present Reading: "<<presentReading<<std::endl;
    std:: cout<<"Previous Reading: "<<previousReading<<std::endl;
    std::cout<<"Consumption: "<<Consumption<< std::endl;

}