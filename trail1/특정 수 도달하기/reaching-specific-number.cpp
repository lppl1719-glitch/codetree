#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    int n=0;
    double avg;

    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]>=250){
            break;
        }
        sum+=arr[i];
        n++;
    }
    avg=(double)sum/n;
    cout<<fixed<<setprecision(1);
    
    cout<<sum<<" "<<avg;

    return 0;
}