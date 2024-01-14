#ifndef FLIGHT_H
#define FLIGHT_H
// class declaration
#include <iostream>
#include<string>
class Flight
{
private:// data member 
    std::string Flightnumber;
    double Distance;
    std::string FlightType;
    double Fuelquantity;
    double Fare;

public:
    Flight();           // default constructer
    Flight(std::string,double,std::string);//parameterized constructer


    //setters
    void set_Flightnumber(std::string);
    void set_Distance(double);
    void set_FlightType(std::string);
    void set_Fare(double);

    //getters

    std::string get_Flightnumber();
    double get_Distance();
    std::string get_FlightType();
    double get_Fuelquantity();
    double get_Fare();

    //calculate fare
    void calculateFare();

    //calculate Fuel
    void calculateFuel();

    void feedinfo(std::string,double,std::string);

    void Showinfo();


};




#endif // FLIGHT_H
