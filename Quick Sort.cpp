//Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
//Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).


//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low < high) {
            int pi = partition(arr, low, high); // Get the partition index
            quickSort(arr, low, pi - 1); // Sort elements before the partition index
            quickSort(arr, pi + 1, high); // Sort elements after the partition index
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
        int pivot = arr[high]; // Select the pivot element
        int i = (low - 1); // Index of smaller element
    
        for (int j = low; j <= high - 1; j++) {
            // If current element is smaller than or equal to pivot
            if (arr[j] <= pivot) {
                i++; // Increment index of smaller element
                std::swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
            }
        }
        std::swap(arr[i + 1], arr[high]); // Place the pivot element in its correct position
        return (i + 1); // Return the index of the pivot element
    }
    
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
