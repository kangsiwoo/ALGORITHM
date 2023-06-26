int d[100]= {0},n=0;

int c1535()
{
    int max = d[0];
    int arr = 0;
    while(n-- != 1)
    {
        if(d[n] > max)
        {
            max = d[n];
            arr = n;
        }
    }
    return arr+1;
}