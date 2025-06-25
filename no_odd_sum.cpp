#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int ones=0;
        int twos=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                ones++;
            }else twos++;

        }
        if(ones%2!=0)cout<<twos<<endl;
        else{
            cout<<min(twos,ones/2)<<endl;
        }
    }
}