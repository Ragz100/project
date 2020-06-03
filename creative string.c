#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,n,i,j;
    scanf("%d%d",&t,&n);
    char **str=(char**)malloc(t*sizeof(char*));
    for(i=0;i<t;i++)
    {
        str[i]=(char*)malloc(n+1);
    }
    char temp[n];
    for(i=0;i<t;i++)
    {
        scanf("%s",str[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("%s\n",str[0]);
    return 0;
}
