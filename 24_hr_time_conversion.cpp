#include<stdio.h>
int main()
{
    char a[10];
    scanf("%s",a);
    if((a[8]=='P') && !(a[0]=='1' && a[1]=='2'))
    {
        a[0]=a[0]+1;
        a[1]=a[1]+2;
    }
    else if(a[8]=='A')
    {
        if(a[0]=='1'&&a[1]=='2')
        {
            a[0]='0';
            a[1]='0';
        }
    }
    a[8]='\0';
    printf("%s",a);
    return 0;
}
