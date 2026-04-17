#include<iostream>
using namespace std;
int main(){

    //using pointers-
    int *p;
    p = new int[5];
    p[0] = 1; 
    cout << p[0];
    delete []p;
    cout << endl;
    //array size decided at runtime-
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cout << "Enter the #" << i+1 << " element: ";
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}