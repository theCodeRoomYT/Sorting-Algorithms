// theCodeRoom
#include<iostream>

//Function to sort an array using Insertion Sort
void insertionSort(int arr[],int n){

    int key, i, j;
    for (i=1; i<n; i++){
        key = arr[i];
        j = i - 1;
        
        /* Shifting elements greater than key 
        to one position on their right */
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        //Placing key in sorted sequence on its left side
        arr[j+1]=key;
    }

    //Printing the sorted sequence
    std::cout<<"Sorted Sequence is: ";
    for (i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    std::cout<<"Insertion Sort"<<std::endl;
    int size;
    std::cout<<"Enter the size of sequence:";
    std::cin>>size;

    // Input Unsorted Sequence
    int arr[size];
    std::cout<<"Enter the sequence:";
    for (int i = 0; i<size; i++){
        std::cin>>arr[i];
    }

    insertionSort(arr, size);
    return 0;
}