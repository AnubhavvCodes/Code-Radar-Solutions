#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>1 && n%1==0 && n*n==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
