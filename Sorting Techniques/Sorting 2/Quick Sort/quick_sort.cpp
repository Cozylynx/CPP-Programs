#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low+1)
        {
            j--;
        }
        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
    
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);


        // Recursive call on the two partitions
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);    
    }
}

int main()
{
    int n;
    cin >> n;
    int value;
    vector<int> arr;

    // using for loop to take the input in the vector
    for (int i = 0; i < n; i++)
    {
        cin>>value;
      arr.push_back(value);
    }

    //calls the function for quicksort
    qs(arr,0, arr.size()-1);
     

    cout<<"The sorted array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}