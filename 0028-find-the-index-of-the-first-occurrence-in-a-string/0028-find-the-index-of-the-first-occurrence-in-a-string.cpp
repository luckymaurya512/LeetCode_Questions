class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int count=0;
        for(int i=0;i<=n-m;i++){
            // if(haystack[i]==needle[0]){
                bool match=true;
                for(int j=0;j<m;j++){
                    if(haystack[i+j]!=needle[j]){
                        match=false;
                        break;
                    }
            
                }
                if(match) return i;
        }
        return -1;
    }
};