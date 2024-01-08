#include <iostream>
int main(){
    int odd_sum=0;
    int even_sum=0;
    for (int i = 0; i <=10; i++)
    {
        if(i%2==0)
        even_sum+=i;
        else
        odd_sum+=i;
    }
    std::cout<<"even sum="<<even_sum<<std::endl<<"odd sum="<<odd_sum;
    return 0;
    
}
//ambeguity in overloading