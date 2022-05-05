class Solution {
public:
    string freqAlphabets(string s) {
        string ans ="";
	
        for(int i=0;i<s.length();i++)
		{	if(i+2<s.length()&&s[i + 2] == '#'){
				int t = (s[i] - '0') * 10 + (s[i + 1] -  '0');
				ans += char(t + 96); 
				i+=2;
			}
			else{
				ans += char((s[i] - '0') + 96);
				
			}}
		
		return ans;
    }
};