class Solution {
public:
    
    double powerfunc(double x,long n){
        if(n==0) return 1.0;
        if(n==1){
            return x;
        }

        if(n%2==0){
            
           return powerfunc(x*x,n/2);
        }
        else{
            
            return x*powerfunc(x,n-1);
        }
    }
    double myPow(double x, int n) {
        
        if(n>0) return powerfunc(x,n);
        else return (1/powerfunc(x,-1*long (n)));
    }
};