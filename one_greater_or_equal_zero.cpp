// Recursive problem, base case when the i reaches n
// When the 1s and 0s are equal, only one choice left for next iteration : choosing 1

    void solve(int i, int n, string op, int one, int zero, vector<string>& ans)
    {
        // base case
        if(i == n)
        {
            ans.push_back(op) ;
            return ;
        }
        
        // when 1s = 0s 
        if(one == zero)
        {
            string op1 = op ;
            op1.push_back('1') ;
            
            solve(i+1, n, op1, one+1, zero, ans) ;
        }
        else // when 1s != 0s
        {
            // MISTAKE: 1 has to be taken before 0 in GFG
            string op2 = op ;
            op2.push_back('1') ;
            
            solve(i+1, n, op2, one+1, zero, ans) ;
            
            string op1 = op ;
            op1.push_back('0') ;
            
            solve(i+1, n, op1, one, zero+1, ans) ; 
        }
    }

	vector<string> NBitBinary(int N)
	{
	    vector<string> ans ;
	    int n = N ;
	    int one = 0 ;
	    int zero = 0 ;
	    int i = 0 ;
	    string op ;
	    
	    solve(i, n, op, one, zero, ans) ;
	    
	    return ans ;
	}
