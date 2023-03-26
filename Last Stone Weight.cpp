class Solution {
public:

    vector<int> sorting(vector<int>& stones)
    {
        sort(stones.begin(),stones.end(),greater<int>());
        return stones;
    }
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()>1)
        {
            stones = sorting(stones);
            if(stones[0]==stones[1])
            stones.erase(stones.begin(),stones.begin()+2);

            else
            {
            stones[0]=stones[0]-stones[1];
            stones.erase(stones.begin()+1);
            }
        }

        if(stones.size()!=0)
        return stones[0];

        else
        return 0;
        
    }
};
