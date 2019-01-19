#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000000];
    int c1=0,c2=0,c3=0;//c=0;
    scanf("%s",s);
    int l=strlen(s);
    int j,i;//temp=0;

     for(i=0;i<l;i++)
    {
         if(s[i]=='3')
         {
              c3=c3+1;
         }
         if(s[i]=='2')
         {
              c2=c2+1;
         }
         if(s[i]=='1')
         {
              c1=c1+1;
         }
//I CAN USE EITHER i OR j
    }
    for(i=0;i<c1;i++)
    {
        printf("1");
       // j++;
        if(i<c1-1 || c2!=0 || c3!=0)
        {
            printf("+");
        }
    }
    for(i=0;i<c2;i++)
    {
        printf("2");
       // j++;
        if(i<c2-1 || c3!=0)
        {
            printf("+");
        }
    }
    for(i=0;i<c3;i++)
    {
        printf("3");
      //  j++;
        if(i<c3-1 )
        {
            printf("+");
        }
    }

}


