
#include <iostream>
using namespace std;
int main() {
    int arr[5]={3,1,6,4,2};
    for (int i=1;i<=5;i++){
        int j=i-1;
        int curr=arr[i];
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
        
    }
    for (int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
