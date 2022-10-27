/*
Character	Description
c			char (character).
s			null-terminated string.
%			Prints a literal % character (this type doesn't accept any flags, width, precision, length fields).
d, i		int as a signed integer. %d and %i are synonymous for output, but are different when used with scanf for input (where using %i will interpret a number as hexadecimal if it's preceded by 0x, and octal if it's preceded by 0.)
u			Print decimal unsigned int.
x, X		unsigned int as a hexadecimal number. x uses lower-case letters and X uses upper-case.
p			void* (pointer to void) in an implementation-defined format.
*/

#include "ft_printf.h"
#include <stdio.h>

int main () {
   int ch;
   int x = 45, y = 90;
   char a[] = "geeksforgeeks";


   // The -10 value is converted into it's positive
    // equivalent by %u
    ft_printf("%u\n", -10);
    ft_printf("%u\n", 10);
   for( ch = 75 ; ch <= 100; ch++ )
   {
		ft_printf("ASCII value = %d, Character = %c\n", ch , ch );
   }

    ft_printf("%d\n", x);
    ft_printf("%i\n", x);

    ft_printf("%s\n", a);
   return(0);
}

 /*
int main()
{
	//hexadecimal
    int a = 15;
    printf("%x\n", a);
    ft_printf("%x\n", a);

    return 0;
}

int main()
{
    int a = 10;
    printf("The Memory Address of a: %p\n",(void*)&a);
    return 0;
}
*/
