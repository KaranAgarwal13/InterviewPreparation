int utopianTree(int n) {
    //bitwise solution
    //n>>1 to get year
    //1<<(year+1) to get 1 followed by yearNumber of 0s
    //subtract 1 to get yearNumber of 1s
    //multiply by 2 if odd cycle
    return((1<<((n>>1)+1))-1) << n%2;
    
    /* recursive solution
    if(n==0)//starts of as size 1
        return 1;
    if(n%2)//doubles in odd cycle
        return 2*utopianTree(n-1);
    return 1+utopianTree(n-1);//increments in even cycle*/
}
