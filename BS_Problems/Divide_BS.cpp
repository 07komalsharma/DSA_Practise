#include <iostream>
using namespace std;

int solve(int divident,int divisor){
    int s=0;
    int e=abs(divident);
    int ans;
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(abs(mid*divisor)==abs(divident)){
            ans=mid;
            break;
        }
        if(abs(mid*divisor)>abs(divident)){
            //right me jao
            e=mid-1;
                  }
        else{
            //left jao
            s=mid+1;
            ans=mid;
        }
        mid=s+(e-s)/2;
    }
    if((divisor<0 && divident<0)||(divisor>0 && divident>0)){
        return ans;
    }
    else{
        return -ans;
    }
    
}
int main()
{
    int divident=25;
    int divisor=-5;
    int ans=solve(divident,divisor);
    
    cout<<"your ans is : "<<ans<<endl;

    return 0;
}
