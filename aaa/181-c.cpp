#include <iostream>
#include <vector>
using namespace std;

int n;
double x[100], y[100];

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int x1=x[i]-x[k];
                int x2=x[j]-x[k];
                int y1=y[i]-y[k];
                int y2=y[j]-y[k];
                if(x1*y2 == x2*y1){
                    cout << "Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout <<"No"<<endl;
    return 0;
}