class Solution {
public:
    int passThePillow(int n, int time) {
        int total_round=time/(n-1);
        int later_chance=time%(n-1);
        if(total_round%2==0)
        return   later_chance+1;
        else
        return n-later_chance;
    }
};