#ifndef PATIENT_H
#define PATIENT_H
using namespace std;
#include <iostream>
 class Patient
 {
 private:
    int patientnumber;
    string patientname;
    float *temp_value=new float[3];
 public: 
    Patient();// default constructor
    Patient(int , string,float*);// parameterised constructer
    Patient(const Patient& );// copy constructer



    float calculateAvgtemerature();
    void display();
    //overloading functions
    bool operator==(const Patient&);
    char& operator[](int );
    bool operator<(const Patient& );
    friend ostream& operator<<(ostream &out, const Patient &);
    ~Patient();

    
    
 };
 
 
 

#endif // PATIENT_H
