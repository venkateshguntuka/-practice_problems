/*Given an unsorted array of numbers ranging from 1 to 500 .Now one element in the array is changed to 0 ,Find that element ?*/
#include<stdio.h>
int findZeroElement(int *arr,int len)
{
    int i,sum1=0,sum2=0;
    sum2=((len+1)*len)/2;
    for(i=0;i<len;i++)
    {
        sum1+=arr[i];//given sum
    }
    return sum2-sum1;
}
int main()
{
    int input[10]={1,2,3,4,0,6,7,8,9,10};
    int result;
    printf("the element made zero is %d\n",findZeroElement(input,10));
    return 0;
}
