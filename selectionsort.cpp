// theCodeRoom
#include<iostream>

//Function to sort an array using Selection Sort.
void selectionSort(int arr[], int n){
    
    int i,j,min_index;
    for(i = 0; i<n; i++){
        min_index = i;

        // Find the index of smallest number. 
        for(j = i+1; j<n; j++){
            if (arr[j]<arr[min_index]){
                min_index = j;
            }
        }

        /* Swapping the number at index i with
           smallest number*/ 
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    //Printing the sorted sequence.
    std::cout<<"Sorted Sequence is: ";
    for (i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }

}

int main(){
    std::cout<<"Selection Sort"<<std::endl;
    int size;
    std::cout<<"Enter the size of sequence:";
    std::cin>>size;

    // Input Unsorted Sequence
    int arr[size];
    std::cout<<"Enter the sequence:";
    for (int i = 0; i<size; i++){
        std::cin>>arr[i];
    }

    selectionSort(arr, size);
    return 0;
}