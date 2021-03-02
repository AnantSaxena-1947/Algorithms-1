#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){
    int pi = arr[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(arr[j]< pi){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main(){
    int r;
    cin >> r;
    int arr[r];
    for(int i=0;i<r;i++){
        cin >> arr[i];
    }
    quicksort(arr,0,r);
    for(int i=0;i<r;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}