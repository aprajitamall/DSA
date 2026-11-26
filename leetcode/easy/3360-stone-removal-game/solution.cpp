class Solution {
public:
    bool canAliceWin(int n) {
        bool alice=false;
        if(n<10)
        return alice;
        int stone=10;
        while(n>=stone)
        {
            n-=stone;
            stone--;
            alice=!alice;
        }
        return alice;

    }
};