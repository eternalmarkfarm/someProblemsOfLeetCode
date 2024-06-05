int majorityElement(std::vector<int>& nums) {
    sort(begin(nums), end(nums));
    int current = nums[0];
    int currentN = nums[0];
    
    int bet = 0;
    for (size_t i = 0; i < nums.size();)
    {
        int count = 0;
        while (i < nums.size() && current == nums[i]) {
            ++count;
            ++i;
        }
        if (count > bet) {
            bet = count;
            currentN = nums[i-1];
        }  
        if(i < nums.size())
        {
            current = nums[i];
        }
    }
    return currentN;
}
