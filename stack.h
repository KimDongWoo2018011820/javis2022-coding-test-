# include <stdio.h>
# include <stdlib.h>

typedef struct _stack{
    int capacity;
    int top;// 인덱스 기능
    int *array;
}stack;

stack* Createstack(){
    stack *s = (stack *)malloc(sizeof(stack));
    if(s == NULL){
        return 0;
    }
    s ->capacity = 100;
    s -> top = -1;
    s ->array = (int *) malloc(sizeof(int)*(s->capacity));
    if( s->array == NULL){
        return 0;
    }
    return s;
}

int isFULL(stack* s){
    return ((s->top) >= (s->capacity -1) ); //연산자 우선 처리로 좀 복잡하지만 top이 capacity-1 보다 크거나 같으면 그 stack은 꽉찬거다 true 면 1을 아니면 0을 줌
}

int isEmpty(stack* s){
    return ((s->top )== -1); // top이 -1일때 비어있다 판단한다.
}

void Push(stack* s,int data){
    if(isFULL(s)){
        printf("Stack is FULL\n");  // 꽉 찾다면 늘려 갈 것 이다. 그러나 capacity를 10으로 설정했으니 별다른 공간을 늘려주지 않아도 된다 이기야
        return; //void이니 return 값은 없다
    }
    s->array[++(s->top)] = data;

}

int Pop(stack* s){
    if(isEmpty(s)){
        printf("Stack is Empty\n");
        return -1;
    }
    return s->array[(s->top)--];
}
void Delete(stack* s){
    if(s){
        if(s->array){
            free(s->array);
        }
        free(s);
    }
}

