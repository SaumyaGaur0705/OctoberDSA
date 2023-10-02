class Solution {
public:
    
    bool winnerOfGame(string colors) {
        int countA=0;
        int countB=0;
        for(int i=1;i<colors.length()-1;i++){
          if(colors[i-1]==colors[i] && colors[i+1]==colors[i] && colors[i]=='A'){
              countA++;
          }
          if(colors[i-1]==colors[i] && colors[i+1]==colors[i] && colors[i]=='B'){
              countB++;
          }
        }
        
        if(countA>countB){return true;}
        else{return false;}
    }
};
