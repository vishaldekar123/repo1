#include<stdio.h>
#define size 9
int main()
{
    int sum=0,count;
    int i,j;
    int arr[]={10 ,20, 20, 10 ,10 ,30 ,50 ,10 ,20 };

    for(i=0;i<size;i++)
    {
        count=1;
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }

        }
        sum+=count/2;
    }
    
    printf("pairs are :: %d",sum);
    
    return 0;

}