/**
* _abs - function that computes the absolute value of an integer
* @m: an input
* Return: the integer
*/

int _abs(int m)
{
	/* @if checks if m > 0*/
	if (m > 0)
		return (m);
	else
		return (m * -1);
}
