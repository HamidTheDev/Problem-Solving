#include <iostream>
using namespace std;

//print array
void print(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

//swap two value
void swapArr(int &x, int &y){
  int temp = x;
  x = y;
  y = temp;
}

// rotate array 
void rotate(int arr[],int size, int r){
  if(r == 0){
    return;
  }
  
  for(int i=0; i<size; i++){
    swapArr(arr[0], arr[i]);
    }

  rotate(arr, size, r-1);
}


//driver function
int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr,5, 2);
    print(arr, 5);
    
}
