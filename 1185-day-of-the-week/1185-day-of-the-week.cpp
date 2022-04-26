class Solution {
public:
    
    
    string dayOfTheWeek(int day, int month, int year) {
       vector<int> mday{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<string> wday{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        
        
        int ansdays=0;
        for(int i=1971;i<year;i++)
        {if((i%4==0 && i%100!=0) || i%400==0)
            ansdays+=366;
         else
             ansdays+=365;
        }
        
        for(int i=1;i<month;i++)
        {if(i==2&&((year%4==0 && year%100!=0) || year%400==0))
            ansdays+=29;
         else
             ansdays+=mday[i];
        }
        ansdays+=day+4;
        return wday[ansdays%7];
        
        
    }
};