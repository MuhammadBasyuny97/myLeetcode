class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum{0};
        for(int i{1} ; i <= arr.size()  ; i = i+2){
            
          //int arr_size {arr.size()};
        //  int n = arr.size() - i +1;
          
            if(i == 1)
                sum = accumulate(arr.begin() , arr.end() ,0);
            else{
                for(int j{0} ; j <= arr.size() - i ; ++j)
                    sum = accumulate(arr.begin() + j , arr.begin() +j+ i , sum );
            }
        }
        return sum;
    }
};