#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int i;
scanf("%s",&a);
i=strlen(a);
a[i]='.';
printf("%s",a);
return 0;
}
