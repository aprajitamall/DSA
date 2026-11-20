class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int space=n*n;
        int  total_c=maxWeight/w;
        if(total_c>=space)
        return space;
        else
        return  total_c;

    }
};