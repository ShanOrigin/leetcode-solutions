class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        int mid = (m + n )/ 2 ;
        int curr = 0 , prev = 0 ;
        int i =0 , j =0 ;

        for( int st = 0 ; st <= mid ; ++st ){
            prev = curr ;
          if( i < m && ( j >= n || nums1[i] <= nums2[j])){
           curr = nums1[i];
           ++i;

          }else{
            curr = nums2[j];
            ++j;
          }

        }
        if( (m+n) % 2 != 0){
            return curr ;
        }
        return (curr + prev ) / 2.0f ;
    }
};