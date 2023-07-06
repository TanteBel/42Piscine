#include <stdio.h>
void printNumber(int nbr)  
{
    printf("%d\n", nbr);
}
void myFunction(void (*f)(int))  
{
    for(int i = 0; i < 5; i++) 
    {
        (*f)(i);
    }
}
int main(void)  
{
    myFunction(printNumber);
    return (0);
}
#include <stdio.h>
void print()  
{
    printf("Hello World!");
}
void helloworld(void (*f)())  
{
    f();
}
int main(void)  
{
    helloworld(print);
    return (0);
}
void striter(char *s, void (*f)(char *)) 
{
    if (s)
    {
        for (int i = 0; s[i]; i++)
        {
            f(&s[i]);
        }
    }
    return ;
}