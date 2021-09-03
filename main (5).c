/******************************************************************************

                             Key_Segment_Array
Check if a key is present in every segment of size k in an array

Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The task is to  find that the key x
present in every segment of size k in arr[].
Examples:

Input :
arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3}
x = 3
k = 3
Output : Yes
There are 4 non-overlapping segments of size k in the array, {3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}. 3 is present all segments.
Input :
arr[] = { 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25}
x = 23
k = 5
Output :Yes
There are three segments and last segment is not full {21, 23, 56, 65, 34}, {54, 76, 32, 23, 45} and {21, 23, 25}.
23 is present all window.
Input :arr[] = { 5, 8, 7, 12, 14, 3, 9}
x = 8
k = 2
Output : No

Input Format
Enter the array size 

Enter the array elements 

Enter the key value

Enter the segment size 

 


Output Format
Display Yes or No
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    int x,k;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nWrite a number to search if it is present in segments or not");
    scanf("%d",&x);
    printf("\nthe length of the segment:");
    scanf("%d",&k);
    

    return 0;
}
