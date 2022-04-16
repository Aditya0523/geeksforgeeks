int safePos(int n, int k) {
        
        vector<int> peeps(n, 0) ;
        for(int i=0; i<n; i++)
            peeps[i] = i+1 ;
        
        k-- ;    
        int idx = 0 ;
        
        while(peeps.size() != 1)
        {
            idx = (idx + k) % peeps.size() ;
            peeps.erase(peeps.begin() + idx) ;
        }
        
        return peeps[0] ;
    }
