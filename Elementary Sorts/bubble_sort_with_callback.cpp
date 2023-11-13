#include<iostream>
using namespace std;

int arr[10];

bool ascending(int x,int y)
{
	return x>y;
}

bool descending (int x,int y)
{
	return x<y;
}

void swapping(int &a, int &b) {      //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void bubbleSort(int *array, int size,bool (*comparision)(int,int)) {
   for(int i = 0; i<size; i++) {
      int swaps = 0;         //flag to detect any swap is there or not
      for(int j = 0; j<size-i-1; j++) {
         if(ascending(array[j],array[j+1])) {       //when the current item is bigger than next
            swapping(array[j], array[j+1]);
            swaps = 1;    //set swap flag
         }
      }
      if(!swaps)
         break;       // No swap in this pass, so array is sorted
   }
}
int main() {
   cout << "Enter elements:" << endl;
   for(int i = 0; i<10; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, 10);
   bubbleSort(arr, 10,ascending);
   cout << "Array after Sorting: ";
   display(arr, 10);
}
