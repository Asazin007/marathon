#include <iostream>
using namespace std;
int main(){
int maths, physics, bio;
cin>>maths>>physics>>bio;
double avg = maths+bio+physics;
avg = avg/3.0;
if(avg<40)
cout<<"You are Fail";
else if(avg >=40 && avg<50)
cout<<"You are Second Class";
else if(avg >=50 && avg <70)
cout<<"You are First Class";
else
cout<<"You got Distinction";
}
