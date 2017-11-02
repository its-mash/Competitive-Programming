bool isALeapYear( int year )
{
	/* Check if the year is divisible by 4 or
	is divisible by 400 */
	return ((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0));
}
-
