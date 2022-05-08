#include <stdio.h>
#include <stdlib.h>


int main(){

    int top, n ,i,*input, *stack, *anw;

    scanf("%d",&n);

    input = malloc(n*sizeof(int));
    stack = malloc(n*sizeof(int));
    anw = malloc(n*sizeof(int));
    top =-1;

    for(i = 0 ; i< n ;i++) scanf("%d",&input[i]);

    for(i = n-1 ; i >=0; i--){
        while((top!=-1) && stack[top]<= input[i]) {
            top -=1;
        } 

        if(top ==-1) anw[i]=-1;
        else{
            anw[i] = stack[top];
        }
        stack[++top] = input[i];
    }

    for(i = 0 ; i< n ;i++) printf("%d ",input[i]);
    printf("\n");

    free(input); 
    free(stack);
    free(anw);
    return 0;
}