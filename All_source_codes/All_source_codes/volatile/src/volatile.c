int main(void)
{
    volatile unsigned char data1;
    volatile unsigned char data2;

    data1 = 50;

    data2 = data1;
    data2 = data1;

    return 0;
}
