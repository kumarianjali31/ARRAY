#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,-8,3,-5,-6};
    int j=0,temp;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }                                                                
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}