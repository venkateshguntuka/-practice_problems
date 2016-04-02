/*Find the maximum and minimum element in an unsorted array
checked against
testcase 1: all same numbers
testcase 2: all positive numbers
testcase 3: all negative numbers
testcase 4: positive and negative numbers
testcase 5: single element in array
*/

#include<stdio.h>
#include<stdlib.h>
//using structure to return two values(min and max) to main function
struct minMax
{
    int min;
    int max;
};
struct minMax findMin_Max(int *,int );
int main()
{
    int len;
    printf("Enter the length of the array:\n");
    scanf("%d",&len);
    int arr[len],i;
    struct minMax res;
    printf("Enter the elements of the array:\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    res=findMin_Max(arr,len);
    printf(" Minimum value:%d\n Maximum value:%d\n",res.min,res.max);
    return 0;
}
struct minMax findMin_Max(int *arr,int len)
{
    if(arr==NULL||len<1)
           return ;
    //if there is only one element in the array then it is both min and max
    struct minMax result;
    if(len==1)
       {
            result.min=arr[0];
            result.max=arr[0];
            return result;
       }
    //when there are more than one elements in the given array
    if(arr[0]<arr[1])
    {
        result.min=arr[0];
        result.max=arr[1];
    }
    else if(arr[0]>arr[1])
    {
        result.min=arr[1];
        result.max=arr[0];
    }
    int i;
    for(i=2;i<len;i++)
    {
        if(arr[i]<result.min)
            result.min=arr[i];
        if(arr[i]>result.max)
            result.max=arr[i];
    }
    return result;

}
