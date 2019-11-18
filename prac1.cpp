#include<iostream>
using namespace std;
#define size 16

int main()
{

    int arr[]={3,1,2,5,4,6,9,8,7,5,2,1,3,6,4,4};
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
              cout<<arr[i];
        }
    }



}