    int singleNumber(vector<int>& nums) {          
        if(nums.size()==1){
            return nums[0];
        }       
        sort(begin(nums),end(nums));        
        for(size_t i = 0; i < nums.size();){            
            if(nums[i] == nums[i+1]){               
                i = i+2;
                continue;
            }
            return nums[i];
        } 
        return nums[nums.size()-1];       
    }
