#include<iostream>
using namespace std;
int main(){
    //Completely in stack memory-
    int A[2][3] = {{1,2,3},{4,5,6}};

    //Half in stack and the rest in heap-
    int*B[2];
    B[0] = new int[3];
    B[1] = new int[3];

    //completely in heap-
    int **C;
    C = new int*[2];
    C[0] = new int[3];
    C[1] = new int[3];

    //free memory-
    delete []B[0];
    delete []B[1]; //here the pointer B is in stack therefore no delete []B

    delete []C[0];
    delete []C[1];
    delete[]C; //as the array of pointers here is in head, therefore this is needed
    return 0;
}