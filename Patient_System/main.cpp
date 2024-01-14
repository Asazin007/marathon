#include <iostream>
#include "./Patient.h"
#include <string>
 
int main(){
    int patno1, patno2;
    string s1,s2;
    float p1[3];
    float p2[3];
    cout<<"Enter details of 1: "<<endl;
    cout<<"Enter patient no: ";
    cin>>patno1;
    cout<<"Enter patient name: ";
    cin>>s1;
    cout<<"Enter temps";
    for(int i=0;i<3;i++)
    cin>>p1[i];
    cout<<"Enter details of 2: "<<endl;
    cout<<"Enter patient no: ";
    cin>>patno2;
    cout<<"Enter patient name: ";
    cin>>s2;
    cout<<"Enter temps";
    for(int i=0;i<3;i++)
    cin>>p2[i];

    Patient pat1(patno1,s1,p1);
    Patient pat2(patno2,s2,p2);
    //copy const
    Patient pat3= pat1;
    cout<<"Value of copy constructer:"<<endl;
    pat3.display();
//==
    if(pat1==pat2)
    cout<<endl<<"obj1 is equal to obj2"<<endl;
    else
    cout<<endl<<"obj1 is not equal to obj2"<<endl;
//[]
pat1[1]='h';
pat1.display();

// <
if(pat1<pat2)
    cout<<endl<<"obj1 is less obj2"<<endl;
    else
    cout<<endl<<"obj1 is greater to obj2"<<endl;

//<<
cout<<pat1<<endl;
cout<<pat2;
}