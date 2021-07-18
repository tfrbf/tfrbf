#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,item;
   printf("\n how many numbers you have : ");
   scanf("%d",&n);
   int temp[n];

   int i;
   for ( i = 0; i < n; i++)
   {
       printf("\n ENter number%d:",i+1);
       scanf("%d",&temp[i]);
   }
   

    return 0;
}



/*void bubble(int temp[],int len)
{
    int i,j,item;
    for (i=len-1;i>0;i--)
    {
        for (j=0;j<i;j++)
        {
            if (temp[j]<temp[j+1])
            {
                item=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=item;
            }
        }
    }
}




void goutput(int R,int z,int l)
{   int R,z,l=0
    R=k-1;
    z=1;
    printf("%d",i[0]);
    while (l!=0)
    {
        l+=(z*R);
        printf("%d",i[l]);
        R--;
        z*=-1;

    }
    

}

*/































int i;
    for (i=0;i<len;i++)
    {
        printf(" %3d",temp[i]);
    }
}