// selection sort
#include <bits/stdc++.h>
using namespace std;

class Sorting
{
public:
    void printArray(vector<int> &arr)
    {
        cout << endl
             << "Printing the array ... \n";
        for (int i : arr)
        {
            cout << i << "  ";
        }
        cout << endl;
    }
    void selectionSort(vector<int> &arr, int n)
    {
        // Write your code
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            // swap
            swap(arr[i], arr[min]);
        }
        printArray(arr);
    }

    // bubble sort
    void bubbleSort(vector<int> &arr, int n)
    {
        // write your code here
        for (int i = 0; i < n - 1; i++)
        {
            bool isSwap = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    isSwap = true;
                }
            }
            if (!isSwap)
            {
                break;
            }
        }
        printArray(arr);
    }

   // Recursive Bubble Sort 
   void bSRec(vector<int> &arr , int n ){
    if (n==1) return;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    
    bSRec(arr,n-1);
   }
    // Insertion Sort
    void insertionSort(vector<int> &arr, int n)
    {
        // Card game (patte)
        for (int i = 1; i < n; i++)
        {
            int j;
            int hold = arr[i];
            for (j = i - 1; j >= 0; j--)
            {
                if (hold < arr[j])
                {
                    arr[j + 1] = arr[j];
                }
                else
                {
                    break;
                }
            }
            arr[j + 1] = hold;
        }
        printArray(arr);
    }
 
 //Insertion Recursive
 void iSRec(vector<int> &arr, int i , int n){
    if(i==n) return ;
    int j = i;
    while(j>0 && (arr[j-1]>arr[j])){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
    iSRec(arr,i+1,n);
 }
    // Merge Sort
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while ((left <= mid) && (right <= high))
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }
    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

}; // class closing

int main()
{
    Sorting sort;
    vector<int> arr = {3, 2, 0, 6, 1};
    cout << "\nBefore Sorting array is  \n";
    sort.printArray(arr);
    //   sort.insertionSort(arr,arr.size());
    //   sort.bubbleSort(arr,arr.size());
    //   sort.selectionSort(arr,arr.size());
    int size = arr.size() - 1;
    // sort.mergeSort(arr, 0, size);
    // sort.bSRec(arr,arr.size());
    sort.iSRec(arr,1,arr.size());
    sort.printArray(arr);
}