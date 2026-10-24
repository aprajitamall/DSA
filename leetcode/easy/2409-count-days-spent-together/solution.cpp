class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
       int startA=daytoday(arriveAlice);
       int startB=daytoday(arriveBob);
       int endA=daytoday(leaveAlice);
       int endB=daytoday(leaveBob);
       int latestArr=max(startA,startB);
        int earlyLv=min(endA,endB);
        return max(0,earlyLv-latestArr+1);
        
    }
    private:
    int daytoday(const string& str)
    {  
        vector<int>dayMonth={31,28,31,30,31,30,31,31,30,31,30,31};
        int month=(str[0]-'0')*10 +(str[1]-'0');
        int day=(str[3]-'0')*10+(str[4]-'0');
        int countdays=0;
        for(int i=0;i<month-1;i++)
        {
countdays+=dayMonth[i];
        }
        return countdays+day;
    }
};