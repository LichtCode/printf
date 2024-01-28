#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#define TRUE 1
#define FALSE 0

int _printf(const char *format, ...);
int args_c(char c);
int args_s(char *s);




int _printf(const char *format, ...)
{
    va_list arg_list;
    int i = 0;
    int word_count = 0;



    if (format == NULL)
    {
        return (0);
    }

    va_start(arg_list, format);

    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            word_count++;
        }
        else if(format[i] == '%')
        {
            i++;
            if(format[i] == '%')
            {
                write(1, &format[i], 1);
                word_count++;
            }

            else if(format[i] == 's')
                word_count+= args_s(va_arg(arg_list, char *));

            else if(format[i] == 'c')
                word_count+= args_c(va_arg(arg_list, int));
        }
        i++;
    }


	return (word_count);
}

int args_c(char c)
{
    write(1, &c, 1);

return(1);
}

int args_s(char *s)
{
    write(1, s, strlen(s));
    return (strlen(s));
}

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("%d \n", len);
    printf("%d \n", len2);
}