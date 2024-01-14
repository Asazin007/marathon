#include <iostream>
#include "./Flight.h"
#include <string>
using namespace std;
int main(){
    Flight obj[3];
    string Flightnumber;
    double Distance;
    string FlightType;
    double fare;
    int t=0;

    while(t<3){
    
    cout<<"Enter details of no "<<(t+1)<<endl;
    cout<<"Flight No.: ";
    cin>>Flightnumber;
    cout<<"Distance: ";
    cin>>Distance;
    cout<<"Flight type: ";
    cin>>FlightType;
    obj[t].feedinfo(Flightnumber,Distance,FlightType);
     obj[t].Showinfo();
    t++;

    
}
//finding the name
bool found =false;
string flno;

cout<<"To search name , Enter Flightnumber: "<<endl;
cin>>flno;
for(int i=0;i<3;i++){
    if(obj[i].get_Flightnumber()==flno){
        found=true;
        cout<<"Found!!!!>>>>>>>>>>>>>>>"<<endl;
        obj[i].Showinfo();
    }
}
if(!found)
cout<<"Details not found"<<endl;

//max 

double mx=0;
string temp;
for(int i=0;i<3;i++){
    if(mx<obj[i].get_Fare()){
        temp=obj[i].get_Flightnumber();
        mx=obj[i].get_Fare();
    

    }
}
cout<<"Flight no whose dis is max: "<<temp<<endl;
cout<<"Maximum Fare : "<<mx<<endl;
}
