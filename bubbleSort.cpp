//theCodeRoom
#include<iostream>

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
    std::cout<<"Sorted Sequence is: ";
    for (int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
}
int main(){
    std::cout<<"Bubble Sort"<<std::endl;
    int size;
    std::cout<<"Enter the size of sequence:";
    std::cin>>size;

    // Input Unsorted Sequence
    int arr[size];
    std::cout<<"Enter the sequence:";
    for (int i = 0; i<size; i++){
        std::cin>>arr[i];
    }

    bubbleSort(arr, size);
    return 0;
}




