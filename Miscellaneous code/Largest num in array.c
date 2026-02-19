#include <iostream>
using namespace std;

int main() {
    int a[] = {3,2,1,2,5}; int n = sizeof(a)/sizeof(a[0]); int largest = a[0];
    for(int i = 0;i < n;i++){
     if(a[i]>largest){
         largest = a[i];
     }
     
    }
    cout<<largest;
    return 0;
}
