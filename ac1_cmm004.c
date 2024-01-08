#include <stdio.h>
#include <math.h>
#include <limits.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}
int minsq(int num,int *arr){
    int count=INT_MAX;
    if(num==0)
    return 0;
    if(arr[num]!=-1) return arr[num];
    for(int i=1;i*i<=num;i++){
        int ways= 1+minsq(num-i*i,arr);
        count=min(count,ways);
    }
    arr[num]=count;
    return count;
    
}
int main(){
    int num;
    scanf("%d",&num);
    // int *arr = (int *)malloc((num+1) * sizeof(int));
    int arr[num+1];
    for(int i=1;i<=num;i++)
    arr[i]=-1;
    int ans =minsq(num,arr);
    printf("%d",ans);
return 0;
}