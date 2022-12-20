int mySqrt(int x){
int low=1, high=x;
 long long mid;
while(low<=high){
    mid=(high - low)/2+low;
    if(mid*mid==x){
        return mid;
    }
    else if(mid*mid<x){
    if( (mid+1)*(mid+1)>x){
        return mid;}
        low=mid+1;}
    else{
        high=mid-1;
    }
}
    return 0;
}





