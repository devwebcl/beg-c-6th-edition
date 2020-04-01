// Program 10a Converting Strings to Numerical Values
#include <stdio.h>

int main(void)
{

char str[] = "123 234 0xAB
111011";
char *pstr = str;
char *ptr = NULL;
long a = strtol(pstr, &ptr, 0);
pstr = ptr;
unsigned long b = strtoul(pstr, &ptr, 0);
pstr = ptr;
long c = strtol(pstr, &ptr, 16);
pstr = ptr;
long d = strtol(pstr, &ptr, 2);
//
//
//
//
//
//
//
Convert base 10 value
Start is next character
Convert base 10 value
Start is next character
Convert a hexadecimal value
Start is next character
Convert binary value
a = 123
b = 234L
c = 171
d = 59

  return 0;
}

