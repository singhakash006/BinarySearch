int arrangeCoins(int n){
    long n1= (long)n;
int low=1, high=n;
long mid;
while(low<=high){
    mid=low+(high-low)/2;
    if(mid*(mid+1)<=n1*2){    
        low=mid+1;
       
        }
    else{
        high=mid-1;
       

    }
}
return low-1;
}
