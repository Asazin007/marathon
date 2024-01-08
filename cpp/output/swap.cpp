#include <iostream>
void swap(int &a , int &b){
    int temp = a;
    a=b;
    b= temp;
}
void swap(double &a, double &b){
    double temp= a;
    a=b;
    b= temp;
}
int main(){
    int a,b;
    std::cout<<"enter int"<<std::endl;
    std::cin>>a>>b;
    swap(a,b);
    std::cout<<"a="<<a<<" "<<"b ="<<b<<std::endl;
    double c, d;
    std::cout<<"enter double"<<std::endl;
    std::cin>>c>>d;
    swap(c,d);
    std::cout<<"c="<<c<<" "<<"d ="<<d<<std::endl;

}