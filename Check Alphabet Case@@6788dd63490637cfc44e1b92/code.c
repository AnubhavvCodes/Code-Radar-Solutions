#incldue <stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    if(isupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}