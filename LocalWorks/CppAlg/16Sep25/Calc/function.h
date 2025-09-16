double Calc(int n, char op, int m) {
    if (op == '+') {
        return n + m;
    } else if (op == '-') {
        return n - m;
    } else if (op == '*') {
        return n * m;
    } else if (op == '/') {
        double dn = n;
        double dm = m;
        return n / m;   
    } else {
        cout << "Wrong Input!" << endl;
        return 0;
    }
}