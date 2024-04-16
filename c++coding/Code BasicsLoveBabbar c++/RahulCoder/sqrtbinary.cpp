class Solution {
public:
    int binarySearch(int n){
       long long int s=0;
       long long int e=n;
        int ans=-1;
        while(s<=e){
           long long int mid = s+(e-s)/2;
            if(mid*mid==n){
                return mid;
            }
            else if(mid*mid<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }

    int mySqrt(int x) {
        return binarySearch(x);  
    }
};  