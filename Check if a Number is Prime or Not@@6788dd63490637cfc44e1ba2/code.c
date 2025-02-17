#include <stdio.h>

int main() {
    int a,is_prime = 1;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
    }
    else{
        for(int i = 2; i < a; i++){
            if(a%i==0){
                is_prime = 0;
                break;
            }
    }
    if(is_prime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    }
    return 0;
}