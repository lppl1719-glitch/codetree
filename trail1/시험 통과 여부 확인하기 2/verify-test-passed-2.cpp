#include <iostream>
using namespace std;

int main() {
    int n=0, cnt=0, sum=0, avg=0;
    cin>>n;
    int tmp[4];
    for(int i=n; i>0; i--){
        cin>>tmp[0]>>tmp[1]>>tmp[2]>>tmp[3];
        for(int j=0;j<4;j++){
            sum+=tmp[j];
        }
        avg=sum/4;
        if(avg>=60){
            cout<<"pass"<<"\n";
            cnt++;
        }else{
            cout<<"fail"<<"\n";
        }
        sum=0;
    }
    cout<<cnt;

    return 0;
}