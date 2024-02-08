#include <stdio.h>
int main()
{
printf("Three dimensional array\n");
int arr[3][3][3]={10,20,30,40,50,60,70,80,90,11,22,33,44,55,66,77,88,99,111,222,3333,444,5555,666,777,888,999};
for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
    {
       for (int k=0;k<3;k++)
        {
            printf(" %d ",arr[i][j][k]);
    }
    printf("\n");
    }
}
return 0;
}
