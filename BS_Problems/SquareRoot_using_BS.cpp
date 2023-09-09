*******************************************************************************/
#include <iostream>
using namespace std;

int findSqrt(int n){
    int target=n;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}

int main()
{
    int n;
    cout<<"enter no "<<endl;
    cin>>n;
    
    cout<<"find its square root"<<endl;
     int ans=findSqrt(n);
    cout<<ans<<endl;
    
    
  
    double finalAns=ans;
    
    
    int precision;
    cout<<"enter the no. of floating point precision"<<endl;
    cin>>precision;
    
    
    double step=0.1;
    
    for(double i=0;i<precision;i++){
        for(double j=finalAns;j*j<=n;j=j+step){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"upto some precision\n"<<finalAns;
    return 0;
}
