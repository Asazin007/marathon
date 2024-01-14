#include <iostream>
#include "./Patient.h"
#include <string>
// default constructer
Patient::Patient()
{
    patientnumber = 0;
    patientname = "";
    for (int i = 0; i < 3; i++)
        temp_value[i] = 0;
}
// parameterized constructer
Patient::Patient(int no, string p, float *temp)
{
    patientnumber = no;
    patientname = p;
    for (int i = 0; i < 3; i++)
        temp_value[i] = temp[i];
}
// copy constructer
Patient::Patient(const Patient &obj)
{
    this->patientnumber = obj.patientnumber;
    patientname = obj.patientname;
    for (int i = 0; i < 3; i++)
        temp_value[i] = obj.temp_value[i];
}

float Patient::calculateAvgtemerature()
{
    float temp = 0;
    for (int i = 0; i < 3; i++)
        temp += temp_value[i];

    return temp / 3.0;
}
void Patient::display()
{
    cout << "Details: " << endl;
    cout << "Patient name: " << patientname;
    cout << "Temperatues: ";
    for (int i = 0; i < 3; i++)
        cout << temp_value[i] << " ";
}
bool Patient::operator==(const Patient &obj)
{
    if (patientname == obj.patientname)
        return true;
    return false;
}
char &Patient::operator[](int i)
{
    if (i < 20)
    {
        cout << "Index is " << i << endl;
        patientname[i] = 'X';
    }
    return patientname[i];
}

// bool Patient::operator<(const Patient& obj){
// float f1=calculateAvgtemerature();
// float f2= obj.calculateAvgtemerature();
// if(f1<f2)
//         return true;
// return true;
// }
bool Patient::operator<(const Patient &obj)
{
    // if(calculateAvgtemerature()<obj.calculateAvgtemerature())
    // return true;
    float a1 = this->temp_value[0] + temp_value[1] + temp_value[2];
    a1 = a1 / 3.0;
    float a2 = obj.temp_value[0] + obj.temp_value[0] + obj.temp_value[0];
    a2 = a2 / 3.0;
    if (a1 < a2)
        return true;
    return false;
}

ostream &operator<<(ostream &out, const Patient &obj)
{
    out << "Details: " << endl;
    out << "Patient name: " << obj.patientname;
    out << "Temperatues: ";
    for (int i = 0; i < 3; i++)
        out << obj.temp_value[i] << " ";
    return out;
}
Patient::~Patient()
{
    delete[] temp_value;
}