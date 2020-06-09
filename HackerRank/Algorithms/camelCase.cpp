int camelcase(string s) {
	//since there will atleast be one word initialize count to 1
    int count = 1;
    for(char c: s)
		//check if char is upperCase then increment
        if(c>='A'&&c<='Z')
            count++;
    return count;
}
