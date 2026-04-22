#include<iostream>
using namespace std;
int main(){
    int *p = new int[5];
    p[0] = 1;
    int *q = new int[10];
    for(int i=0;i<5;i++){
        q[i] = p[i];
    }
    delete []p;
    p = q;
    q = NULL;
    p[7] = 2;
    cout << p[0];
    cout << p[7];
    return 0;
}