#include <stdio.h>

int main()
{
    char v = 'A';
    int* p = NULL;
    p = &v;
    
    printf("Adderss of v: %x\n", v);
    printf("Adderss stored in p: %x\n", p);
    printf("Adderss of p: %x\n", &p);
    printf("Value of *p: %x\n", *p);
    
    
    return 0;
}
