class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int  mh=0;
        int total=0;
        for(int i=0;i<n;i++)
        {  
            total+=gain[i];
            mh=max(mh,total);
        }
        return mh;
    }
};