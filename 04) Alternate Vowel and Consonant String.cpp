class Solution{
    public:
    string rearrange (string S, int N)
    {
        // your code here
        vector<int> vow(26,0), cons(26,0);
    int v = 0, c = 0;
    char fvow='-',fcons='-'; // fvow represent the smallest vowel similarly fcons represent the smallest consonant
    for(char c1:S){
        if(c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u'){
            vow[c1-'a']++;
            if(fvow=='-' || fvow>c1) fvow = c1;
            v++;
        }
        else{
            cons[c1-'a']++;
            if(fcons=='-' || fcons>c1) fcons = c1;
            c++;
        }
    }
    string ans=S;
    int i = 0, j = 0,x = 0;
    bool IsVowel = false;
    
    if(N%2==0){
        if(v!=c) return "-1";
        if(fvow<fcons) IsVowel = true;
    }
    else{
        if(v>c+1 || c>v+1) return "-1";
        else if(v==c+1) IsVowel = true;
    }
    
    while(x<N){
        while(vow[i]==0) i++;
        while(cons[j]==0) j++;
        if(IsVowel){
            ans[x++]=i+'a';
            vow[i]--;
            IsVowel = false;
        }
        else if(!IsVowel){
            ans[x++]=j+'a';
            cons[j]--;
            IsVowel = true;
        }
    }
    return ans;
    }
};
