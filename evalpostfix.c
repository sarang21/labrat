#include<stdio.h>
#include<ctype.h>
#include<math.h>
char in[200];
int stack[100];
int i=0,j=0,top=-1;
void input()
{
    printf("Enter infix expression:");
    scanf("%s",&in);
}
void push(char item)
{
    if(top>=100)
    {
        printf("Stack is full");
    }
    else
    {
        stack[++top]=item;
    }
}
char pop()
{
    if(top<0)
    {
        printf("Stack is empty");
    }
    else
    {
        top--;
        return stack[top+1];
    }
}
char readsymbol()
{
    if(in[i]!='\0')
    {
        i++;
        return in[i-1];
    }
}
void display()
{
    int temp;
    if(top<0){printf("stack is empty");}
    else{
    printf("\nElements in stack are:");
    for(temp=top;temp>0;temp--)
    {
        printf(" %d ",stack[temp]);
    }}
}
void main()
{
    char op;
    int x,y,t,value,item;
    input();
    strcat(in,"#");
    item=readsymbol();
    while(item!='#')
    {display();
        if(isdigit(item))
            push(item);
        else
        {
            op=item;
            y=pop();
            x=pop();
            switch(op)
            {
                case '*':t=x*y;
                        break;
                case '/':t=x/y;
                        break;
                case '+':t=x+y;
                        break;
                case '-':t=x-y;
                        break;
                case '^':t=pow(x,y);
                        break;
            }
            push(t);
        }
        item=readsymbol();
    }
    value=pop();
    printf("Result is:%d",value);
}
