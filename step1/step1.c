int main ()
{
    int a = 0x7;
    int b = 0x1;

    if (a & b == 0x8) {
        puts("Normal.");
    } else {
        puts("Hmm wait what ?!");
    }
    return b;
}