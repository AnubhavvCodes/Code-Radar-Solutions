#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    return fibonacci(n-1) * n;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n);
    return 0;
}