string dayOfProgrammer(int year) {
    string date = "dd.mm.yyyy";
    //year is unchanged
    date[6] = (year/1000) + '0';
    date[7] = (year%1000)/100 + '0';
    date[8] = (year%100)/10 + '0';
    date[9] = (year%10) + '0';
    //month in all cases is "09"
    date[3] = '0';
    date[4] = '9';
    if(year==1918)
    {
        //date in transition year
        date[0] = '2';
        date[1] = '6';
    }
    else
    {
		//date is always either 12 or 13
        date[0] = '1';
        if((year<1918 && year%4==0)||(year>1918 &&(year%400==0||(year%4==0&&year%100!=0))))
            //date = 12/09 on leap years
            date[1] = '2';
        else
            //date = 13/09 on non leap years
            date[1] = '3';
    }
    return date;
}
