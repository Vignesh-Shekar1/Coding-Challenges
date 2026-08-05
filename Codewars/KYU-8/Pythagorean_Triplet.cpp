bool PythagoreanTriple(const int a, const int b, const int c)
{
    if (a >= b && a >= c) {
        return (a*a == b*b + c*c);
    } else if (b >= a && b >= c) {
        return (b*b == a*a + c*c);
    } else {
        return (c*c == b*b + a*a);
    } 
}
