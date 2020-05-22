int reverseDigits(int n)
{
    int rev = 0;
    while(n)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    return rev;
}

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
    int days = 0;
    for(; i<=j; i++)
        if(!(abs(i-reverseDigits(i))%k))
            days++;
    return days;
}
