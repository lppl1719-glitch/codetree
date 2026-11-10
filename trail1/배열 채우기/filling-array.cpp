#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int tmp, count=0;
    for(int i=0; i<10; i++){
        cin>>tmp;
        if(tmp==0)  break;
        arr[i]=tmp;
        count++;
    }
    for(int i=count-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}