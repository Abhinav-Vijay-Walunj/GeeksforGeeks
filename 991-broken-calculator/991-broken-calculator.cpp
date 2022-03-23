class Solution {
public:
    int brokenCalc(int startValue, int target) {
        // res for counting number of operation
        int res = 0;
        
        while(target > startValue)
        {
			// if target is odd we will make it even
            if(target % 2)
                ++target;
			// if target is even divide by 2
            else
                target /= 2;
            
            ++res;
        }
        return res  + startValue - target;
        
    }
};