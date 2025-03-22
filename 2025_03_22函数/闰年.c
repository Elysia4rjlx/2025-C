int is_leap_year(int y)
{
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
    {
        return 1; // 是闰年，返回1
    }
    else {
        return 0; // 不是闰年，返回0
    }
}