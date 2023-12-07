#include <stdio.h>
#include <string.h>
void main()
{
    int n,ca=0,ce=0,ci=0,co=0,cu=0;
    printf("Enter the length of string :- ");
    scanf("%d", &n);
    char str[n];
    printf("\nEnter the string :- ");
    gets(str);
    gets(str);
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'a')
        ca++;
        else if(str[i] == 'e')
        ce++;
        else if(str[i] == 'i')
        ci++;
        else if(str[i] == 'o')
        co++;
        else if(str[i] == 'u')
        cu++;
    }
    if(ca>ce&&ca>ci&&ca>co&&ca>cu)
    printf("A");
    else if(ce>ci&&ce>co&&ce>cu)
    printf("E");
    else if(ci>co&&ci>cu)
    printf("I");
    else if(co>cu)
    printf("O");
    else
    printf("U");

}