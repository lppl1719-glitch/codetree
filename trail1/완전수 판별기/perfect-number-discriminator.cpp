#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int sum=0;
    
    for(int i=1;i<N;i++){
        if(N%i==0){
            sum+=i;
        }
    }
    if(sum==N){
        cout<<"P";
    }else{
        cout<<"N";
    }

    return 0;
}