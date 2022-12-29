vector<string> possibleChanges(vector<string> usernames) {
int n=usernames.size();
    vector<string>ans;
    for(int i=0;i<n;i++)
    {
        string s=usernames[i];
        int l=s.length();
        int f=0;
        for(int j=0;j<l;j++)
        {
        
            for(int k=j+1;k<l;k++)
            {
                if(s[j]>s[k])
                {
                    ans.push_back("YES");
                    f=1;
                    break;
                }
            }
            if(f==1)
              break;
        }
        if(f==0)
          ans.push_back("NO");
    }
    return ans;
}