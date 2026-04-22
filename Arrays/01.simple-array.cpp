#include<iostream>
using namespace std;
int main(){
    int A[5] = {1,2,3,4,5};

    //3-methods-of-visiting
    cout << A[0] <<endl;
    cout << 1[A] << endl;
    cout << *(A+2) << endl;
     
    //iteration
    for(int i=0;i<5;i++){
        cout << A[i] << " ";
    }
    return 0;
}