class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minvalue=nums[0]+nums[1]+nums[2];
        int maxvalue=nums[n-3]+nums[n-2]+nums[n-1];
        //cout<<maxvalue;
        if(target<=minvalue)
        return minvalue;
        else if(target>=maxvalue)
        return maxvalue;
        else
        {
            int mn=4000,ans;
            for(int k=0;k<n-2;k++)
            {
                int i=k+1,j=n-1;
                int x=target-nums[k];
                while(i<j)
                {
                    if(mn!=min(mn,abs(x-(nums[i]+nums[j]))))
                    {
                        ans=nums[k]+nums[i]+nums[j];
                        mn=min(mn,abs(x-(nums[i]+nums[j])));
                    }
                    //cout<<mn<<'\n';
                    if(nums[i]+nums[j]>x)
                    j--;
                    else if(nums[i]+nums[j]<x)
                    i++;
                    else
                    return ans;

                }
                
            }
            //cout<<mn;
            return ans;
         }
        
    }
};
