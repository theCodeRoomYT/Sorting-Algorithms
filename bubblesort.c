#include<stdio.h>
#include<stdbool.h>

//Function to sort an array using Bubble Sort
void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        bool swapped = false;

        for(int j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                // Swapping the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }

        // breaks the loop if the sequence is sorted
        if (swapped == false){
            break;
        }
    }
    
    //Printing the sorted sequence
    printf("Sorted Sequence is: ");
    for (int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    
}

int main(){
    printf("Bubble Sort\n");
    int size;
    printf("Enter the size of sequence:");
    scanf("%d",&size);

    // Input Unsorted Sequence
    int arr[size];
    printf("Enter the sequence:");
    for (int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr, size);
    return 0;
}