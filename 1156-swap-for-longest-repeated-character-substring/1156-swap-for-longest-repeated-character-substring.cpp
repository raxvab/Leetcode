class Solution
{
    public:
        int maxRepOpt1(string s)
        {
            int count = 1, ans = 1, k = 0;
            unordered_map<char, int> m;
            for (int i = 0; i < s.size(); i++)
            {

                m[s[i]]++;
            }
            
            
            for (int i = 1; i < s.size(); i++)
            {
                count = 1;

                while (i < s.size() and s[i] == s[k])
                    i++, count++;
                
                ans = max(count, ans);
                if (m[s[k]] <= count)
                {
                    k = i;
                    continue;
                }

                int ind2 = i;
                i++, count++;

                while (i< s.size() and s[i] == s[k])
                    i++, count++;

                ans = max(ans, min(count, m[s[k]]));
                i = ind2;
                k = ind2;
            }

            return ans;
        }
};