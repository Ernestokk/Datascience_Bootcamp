#include <iostream>

using namespace std;


int main()

{
    int arr[u];
    int i, max, min, size;
    // Input size of the array
    cout<<"Enter size of the array: ";
    cin>>u;
    // Input array elements
    cout<<"\n Enter "<< u <<" elements in the array: ";
    for(i=0; i<u; i++)
        cin>>arr[i];
    // Assume first element as maximum and minimum
    max = arr[0];
    min = arr[0];
    //Find maximum and minimum in all array elements.
    for(i=1; i<u; i++)
    {
    // If current element is greater than max
        if(arr[i] > max)
            max = arr[i];
        // If current element is smaller than min
        if(arr[i] < min)
            min = arr[i];
    }
    // Print maximum and minimum element
    cout<<"\nMaximum element =" << max << "\n";
    cout<<"Minimum element =" << min;
    return 0;

}