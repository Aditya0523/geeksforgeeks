 void solve(int i, string ip, string op, vector<string>& ans)
    {
        if(i == ip.length())
        {
            ans.push_back(op) ;
            return ;
        }
        
        string op1 = op, op2 = op ;
        
        op1.push_back(' ') ;
        op1.push_back(ip[i]) ;
        solve(i+1, ip, op1, ans) ;
        
        op2.push_back(ip[i]) ;
        solve(i+1, ip, op2, ans) ;
        
    }

    vector<string> permutation(string S){
        
        int i=1 ;
        string output = "" ;
        output.push_back(S[0]) ; 
        vector<string> ans ;
        
        solve(i, S, output, ans) ;
        
        sort(ans.begin(), ans.end()) ;
        return ans ;
    }
