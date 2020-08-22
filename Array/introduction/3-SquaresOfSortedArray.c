Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Note:

1 <= A.length <= 10000
-10000 <= A[i] <= 10000
A is sorted in non-decreasing order.

 //may cause time limited
 
int* sortedSquares(int* A, int ASize, int* returnSize){
    void MergeSort(int array[], int begin, int end, int temp[]);
    *returnSize = ASize;
    //int *B = malloc(sizeof(int) * ASize);
    for (int i=0;i<ASize;i++)
    {
        A[i] = A[i]*A[i];
    }
    int *temp = (int*)malloc(sizeof(int) * ASize);
    MergeSort(A, 0, ASize-1, temp);
    return A;
}
///mergesort
void mergearray(int array[], int begin, int mid, int end, int temp[])
{
    int i = begin, j = mid+1;
    int m = mid, n = end;
    int k = 0;
    while (i<=m && j<=n)    //
    {
        if (array[i]<=array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }
    while (i<=m)
    {
        temp[k++] = array[i++];
    }
    while (j<=n)
    {
        temp[k++] = array[j++];
    }
    for (int l = 0; l<k; l++)    //substitute part of array with sorted temp
    {
        array[begin+l] = temp[l];
    }
}

void MergeSort(int array[], int begin, int end, int temp[])
{
    void mergearray(int array[], int begin, int mid, int end, int temp[]);
    if (begin < end)
    {
        int mid = (begin+end)/2;
        MergeSort(array, begin, mid, temp);
        MergeSort(array, mid+1, end, temp);
        mergearray(array, begin, mid, end, temp);
    }
}
