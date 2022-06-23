int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    
    sort(at, at+n);
    sort(dt, dt+n);
    
    int minPlt = 1, depTime = dt[0], plt = 1, i = 1, j= 0;
    
    while(i<n && j<n){
        if(at[i] <= depTime){
            plt++;
            i++;
        }else{
            plt--;
            depTime = dt[++j];
        }
        minPlt = max(minPlt, plt);
    }
    
    return minPlt;
}
