#include<iostream>
using namespace std;
void rotateArray(int arr[], int size, int n) {
    //size -> size of array
    //n -> refers to the number of elemnts by which we have to shift
    n = n % size;
    
    if(n == 0) {
        //no need to do anything
        return ;
    }

    //step1: copy last n elements into a temp array
    int temp[10000];
    int index = 0;
    for(int i = size-n; i<size; i++) {
        temp[index] = arr[i];
        index++;
    }

    //step2: shift array elemnts by finalShift places

    for(int i=size-1; i>=0; i--) {
        if(i-n >= 0 ) {
            arr[i] = arr[i-n];
        }
    }

    //step3: copy temp elements into original array 
    for(int i=0; i<n; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    //cyclically rotate array bu 2 places
    int n = 2;

    cout << "Before: " << endl;
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateArray(arr,size, n);

    //print array
    cout << "After: " << endl;
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
    }