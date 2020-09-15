#include<iostream>
using namespace std;
//sorting an array in ascending and descending order
void desArr(int arr[], int size)
{    
    for(int i = 0; i<size; i++)
         cout<<arr[i]<<" ";
    cout<<endl;
    int temp = 0;
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
             }
         }
        cout<<arr[i]<<" ";
     }
}
int main()
{   
    int size;
    int arr[] = {4,3,6,8,10,3,3,4};
    size = sizeof(arr)/sizeof(arr[0]);
    desArr(arr, size);
    return 0;
 }
