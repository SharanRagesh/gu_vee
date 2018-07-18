#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int i;
scanf("%s",&a);
i=strlen(a);
a[i]='.';
printf("%s",a);

}
