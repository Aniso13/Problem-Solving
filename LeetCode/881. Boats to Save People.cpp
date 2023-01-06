class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int c=0;
        int l= people.size()-1;
        int start=0;
        sort(people.begin(), people.end());
         while (start<=l)
         {
            if(people[start] + people[l]<=limit)
            {
                c++;
                l--;
                start++;
            }
            else
            {
                c++;
                l--;
            }
            
         }
         return c;
    }
};