#include <stdio.h>

float calc(char op,float num1,float num2)
{
    if(op=='+')
    return num1 + num2;
  else if(op=='-')
 return num1 - num2;
else if(op=='*')
 return num1 * num2;
else if(op=='/')
return num1 / num2;
else
return 0;
}
