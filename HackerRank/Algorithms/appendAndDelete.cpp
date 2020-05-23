string appendAndDelete(string s, string t, int k) {
    int sLength = s.length(), tLength = t.length();
    //if length can't be made same by k append then return No
    if(abs(sLength-tLength)>k)
        return "No";
    //if k is equal or more than sum of lengths return yes
    if(sLength+tLength<=k)
        return "Yes";
    //if both strings are same and k is even or more than twice length return true
    if(s == t && (k > 2*sLength || k%2==0))
        return "Yes";
    int i,j;
    for(i = 0, j = 0; i < sLength, j < tLength; i++, j++)
    {
        //search for mismatch index
        if(s[i]!=t[j])
            break;
    }
    //if mismatch doesn't occur but s is smaller than t
    if(j != tLength && i == sLength && i+k >= tLength && i+k-tLength % 2 == 0)
        return "Yes";
    //if mismatch doesn't occur but t is smaller than s
    if(j == tLength && j+k >= sLength && j+k-sLength%2 == 0)
        return "Yes";
    //operationsLeft is operations - deletions - additions
    int operationsLeft = k -sLength+i -tLength+j;
    if(operationsLeft>=0 && operationsLeft%2==0)
        return "Yes";
    return "No";
}
