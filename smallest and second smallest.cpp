#include <iostream>
#include<queue>
using namespace std;

void smallestAndSecondSmallest(int *arr,int n)
{
    priority_queue<int,vector<int>,greater<int> > minHeap;
    for(int i=0;i<n;i++)
    {
        minHeap.push(arr[i]);
    }
    int smallest = minHeap.top();
    minHeap.pop();
    int secondSmallest = minHeap.top();
    cout<<"Smallest Element is "<<" "<<smallest<<endl;
    cout<<"Second Smallest Element is"<<" "<<secondSmallest<<endl;
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    smallestAndSecondSmallest(arr, n);

    delete[] arr;
}
