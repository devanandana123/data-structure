#include<stdio.h>
int stack[100],top=-1,size,choice,num, i;
void push();
void pop();
void display();
void main() {
    printf("enter the limit of the array:");
    scanf("%d",&size);
    printf("1.push\n 2.pop\n 3.display\n");
    do{
       printf("enter the choice\n");
       scanf("%d",&choice);
       switch(choice){
          case 1:push();
                break;
          case 2:pop();
                break;
          case 3:display();
                break;
          default :
             printf("invalid choice");
       } 
    }while(choice!=4);
}
void push() {
    if(top==size-1){
     printf("stack overflow ");
    } 
    else
    {printf("enter the number to be inserted \n");
    scanf("%d",&num);
    top++;
    stack[top]=num;
    } 
}
void pop() {
    if(top==-1)
     {
         printf("stack underflow");} 
    else{
        printf("number to be popped out is %d",stack[top]);
        top--;
    }
}
void display() {
    if(top>=0)
       for(i=top;i>=0;i--)
    {
        printf("%d \t",stack[i]);} 
    else{
        printf("stack is empty ");
    }
}