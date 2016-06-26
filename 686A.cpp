// http://codeforces.com/problemset/problem/686/A

#include <iostream>

int main()
{
    unsigned char op;
    unsigned int n, d_ch = 0;
    unsigned long long i_cr, c;
    
    std::cin >> n >> i_cr;

    for(unsigned int i = 0; i < n; ++i)
    {
        std::cin >> op >> c;

        if(op == '+')
        {
            i_cr += c;
        } 
        else
        {
            if(c > i_cr)
            {
                d_ch++;
            } 
            else
            {
                i_cr -= c;
            }
        }

    }

    std::cout << i_cr << " " << d_ch << std::endl;

    return 0;
}