//leet code 27 problem
//-------------------approach1------------------------------
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto i=nums.begin();
        while(i!=nums.end())
        {
            if(*i==val)
            nums.erase(i);
            else
            i++;
        }
        return nums.size();

    }
};
//--------------------------------------------approach2----------------
//two pointer
time compelexity:o(n);
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
       int i=0,j=0;
       while(j!=n)
       {
           if(val!=nums[j])
           {
               int temp=nums[i];
               nums[i]=nums[j];
               nums[j]=temp;
               i++;
           }
           j++;
       }
       return i;
    }
       
};
