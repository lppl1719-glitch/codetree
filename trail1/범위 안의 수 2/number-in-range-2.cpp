#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int m=0;
    int sum=0;
    double avg=0;

    for(int i=0;i<10;i++){
        cin>>n;
        if(n>=0&&n<=200){
            sum+=n;
            m++;
        }
    }
  
    avg=(double)sum/m;
    cout << fixed;
    cout << setprecision(1);
    cout<<sum<<" "<<avg;
    return 0;
}