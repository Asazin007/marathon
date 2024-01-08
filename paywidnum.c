#include <stdio.h>
#include <math.h>
int playwidnum(signed long int n){
int long t=n;
long long int pro=1;
while(t>0){
int temp=t%10;
pro=pro*temp;
t=t/10;
}
long long int limit=1;

for(int i=1;i<=32;i++){
    limit=limit*2;
}

if(pro==0 )
return -1;
else if(pro>=limit-1)
return -1;
else{
long int k =n;
int mx=0;
int long long sum=0;
while(k>0){
int temp=k%10;
sum=sum+(temp*temp);
if(temp>mx)
mx=temp;
k=k/10;
}
if(pro%2==0)
return mx*mx*mx;
else
return sum;
    
}
return -1;
}
int main(){
    long long int  n;
    scanf("%lld",&n);
    printf("%d",playwidnum(n));
    // printf("%u",sizeof(signed int));
}