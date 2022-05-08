#include "stack.h"
#define move_legth 8
int main(){
    int n =5,i,j,count,temp;
    int matrix[5][5] = {{0,0,0,0,0} , {0,0,1,0,3}, {0,2,5,0,1} ,
                        {4,2,4,4,2},{3,5,1,3,1}};

    int move[move_legth] ={1,5,3,5,1,2,1,4};


    stack **stack_s = malloc(sizeof(stack *)*n) ,*result;
    result = Createstack();
    for(i =0; i<n ;i++) stack_s[i] = Createstack();

    for(i =0; i<n;i++){
        for(j = 0; j<n;j++){
            if(matrix[i][j]!=0) Push(stack_s[i],matrix[i][j]);

        }
    }
     
    count =0;
    printf("\n\n\n-----------------operating------------------\n\n\n");
    for(int i =0; i<  move_legth ; i++){
        temp = Pop(stack_s[move[i]-1]);

        if(temp !=-1){
            if(temp == result->array[result->top]){
                count+=1;

                printf("Pop %d\n", Pop(result));
            }

            else{
                Push(result,temp);
            }

        }

    }printf("\n\n\n-----------------end------------------\n\n\n");


    printf("_________result : %d\n",count*2);




    return 0;
}