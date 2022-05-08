# include <stdio.h>
# include <string.h>
# define max_string 51

char string[max_string];
char stack[max_string];


void push(char *stack, char input, int *top){
    stack[++*top] = input;
    return; 
}

void pop(char *stack, int *top){
    char temp;
    *top= *top- 1;
    return;
}

int main(){
    int n,i, top,count, index,*result;
    char *input;
    scanf("%d",&n);

    index =0;

    for(i = 0; i < n ;i++){
        scanf("%s",string);
        top =-1;
        count =0;

        while (count < strlen(string))
        {
            if (string[count] =='(' ) push(stack,string[count++],&top);
            else if (string[count++] ==')' )  pop(stack,&top);
            if(top < -1 ) {
                printf("NO\n");
                break;
            };
        };

        if(top ==-1) printf("YES\n");
        else  if(top > -1 ){
            printf("NO\n");
        }

    }

    free(result);



    return 0;
}