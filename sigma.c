//Program that takes in int m and
//uses recursion to add up all integers up to m.

int sigma(int m)
{
    if (m <= 0)
    {
        return 0;
    }
    else
    {
        return m + sigma(m-1);
    }
}
