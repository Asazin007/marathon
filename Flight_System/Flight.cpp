#include <iostream>
#include "./Flight.h"
#include<string>
using namespace std;
//constructers
Flight::Flight(){
    this->Flightnumber="";
    this->Distance=0;
    this->FlightType="";
    this->Fuelquantity=0;
    this->Fare=0;
}
Flight::Flight(std::string Flightnumber,double Distance,std::string Fuelquantity){
this->Flightnumber=Flightnumber;
this->Distance=Distance;
this->FlightType=FlightType;
}

//setters
void Flight:: set_Flightnumber(std::string s){
   Flightnumber=s;
     
}
void Flight:: set_Distance(double d){
        Distance=d;

    }
void Flight:: set_FlightType(std::string s2){
        FlightType=s2;

    }

//getters
std::string Flight:: get_Flightnumber(){
    return Flightnumber;
}

    double Flight:: get_Distance(){
return Distance;
    }
    std::string Flight:: get_FlightType(){
        return FlightType;
    }
    double Flight:: get_Fuelquantity(){
        return Fuelquantity;

    }
    double Flight:: get_Fare(){
        return Fare;

    }

    //calculate fare
    void Flight:: calculateFare(){
        if(Distance<=1000)
        Fare= 5000;
        
        else if(Distance>=1000 && Distance<=1500) Fare=11000;
        else if( Distance>1500 && Distance<=2000) Fare=22000;
        else if( Distance>2000)
        Fare = 30000;
    }

    //calculate Fuel
    void Flight:: calculateFuel(){
        if(Distance<=1000)
        Fuelquantity= 4000;
        
        else if(Distance>=1000 && Distance<=1500) Fuelquantity=6000;
        else if( Distance>1500 && Distance<=2000) Fuelquantity=7500;
        else if( Distance>2000)
        Fuelquantity = 10000;

    }
    void Flight:: feedinfo(std::string Flightnumber,double Distance,std::string FlightType){
set_Flightnumber(Flightnumber);
this->Distance=Distance;
this->FlightType=FlightType;
this->calculateFare();
this->calculateFuel();
    }
    void Flight:: Showinfo(){
        cout<<"details: "<<endl;
    cout<<"Flight No.: "<<this->Flightnumber<<endl;
    cout<<"Distance: "<<Distance<<endl;
    cout<<"Flight type: "<<FlightType<<endl;
    
    }