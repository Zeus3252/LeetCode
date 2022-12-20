class Solution {
public:
    void reverseString(vector<char>& s) {
        int arrSize = s.size();
        int i = 0;
        int x = 0;
        swap(s[i],s[arrSize-1]);
        i++;
        x = arrSize-2;
        
        while (i < x){
                swap(s[i],s[x]);
                i++;
                x--;     
        } 
    }
};