#include <iostream>
using namespace std;

int main() {
    int A,B;
    int prob=1;
    cin>>A>>B;

    for(int i=1;i<=B;i++){
        if(i%A==0){
            prob*=i;
        }
    }
    cout<<prob;
    return 0;
}