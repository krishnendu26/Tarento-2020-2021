//- Accept a String input
//-Verify whether the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in exp. Print well formed if every opening brace has an equivalent closing brace. 
//Print invalid if every opening brace does not have an equivalent closing brace

#include<stdio.h>
#include<string.h>
int i=-1;
char stack[100];
void push(char data)
{
  i++;
  stack[i]=data;
}
char pop()
{
  char c=stack[i];
  i--;
  return c;
}
void main()
{
  char input[100];
  printf("Enter string to be varified");
  scanf("%c",input);
  push('$');
  push('S');
  int j=0;
  while(j<100 && input[j]!='$')
  {
    char ch=pop();
    if(ch==input[j])
       j++;
    else if(ch=='@')
       continue;
    else
    {
       if(input[j]=='(')
       {
          push(')');
          push('S');
          push('(');
       }
       else if(input[j]==')')
          push('@');
       else
          break;
    }
  }
  if(input[j]=='$' && pop()=='$')
     printf(" Balanced",input);
  else
     printf(" Not Balanced");
}

