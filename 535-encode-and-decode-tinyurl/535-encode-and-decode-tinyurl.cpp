class Solution {
public:
int ind=0;
     map<string,string> m;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
       ind++;
        // int ind=0;
        string s;
//         for(int i=0;i<longUrl.length();i++)
//             if(s[i]==':'and s[i+1]=='/'and s[i+2]=='/')
//             {ind=i+2;break;}
//         s=s.substr(ind+1,longUrl.length()-1);
        
       s=to_string(ind);
       
        s="http://tinyurl.com/"+s;
         m[s]=longUrl;
        return s;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        // string r=shortUrl.substr(20,shortUrl.length()-1);
        // r="https://"+m[r];
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));