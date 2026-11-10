#include <iostream>
using namespace std;

int main() {
    int tmp=0, cnt=0, sum=0;

    for(int i=0;i<10;i++){
        cin>>tmp;
        if(tmp==0)  break;
        if(tmp%2==0){
            cnt++;
            sum+=tmp;
        }
    }
    cout<<cnt<<" "<<sum;

    return 0;
}