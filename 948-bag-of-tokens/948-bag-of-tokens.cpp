class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
      sort( tokens.begin(),tokens.end());
      int j=tokens.size()-1, score=0,i=0;
    while(  i<=j)
      {
        if(power>=tokens[i]){
          power-=tokens[i];
          i++;
          score++;
        
        
                cout<<"enfdfkjafdak\n";
}
        else if( power<tokens[i] and score>0)
         { 
          if( 0== (j-i))
            break;
          score--;
          power+=tokens[j]  ;
          j--;
        cout<<"enfdfkjafdak laaaaaaaaaaaaast\n";
        }
      else if ( power< tokens[i] and score==0)
       break;
      }
      return score;
    }
};