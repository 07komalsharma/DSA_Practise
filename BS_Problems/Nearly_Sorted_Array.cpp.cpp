/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int binSrch(vector<int> arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==target){
            return mid;    
        }
        if(mid-1>= 0 && arr[mid-1]==target){
            return mid-1;
        }
        if(mid+1<arr.size() && arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            //search in right side
            s = mid + 2;
        }
        else{
            //search in left
            e = mid - 2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr{10,3,40,20,50,80,70};
    int target=70;
    int ans=binSrch(arr,target);
    
    
    cout<<"index of "<<target<<" is "<<ans<<endl;
    

    return 0;
}