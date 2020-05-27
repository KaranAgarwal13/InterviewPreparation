int jumpingOnClouds(vector<int> c) {
	//initialize count and cloud to 0
    int count = 0, i = 0;
	//before reaching end loop
    while(i<c.size()-1)
    {
		//increment count
        count++;
		//if second jump isn't thunderous
        if(c[i+2]!=1)
            i+=2;
        else//if second jump isn't feasible do 1 step jump
            i++;
    }
    return count;
}
