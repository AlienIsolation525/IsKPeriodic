#include<iostream>
using namespace std;

bool isPrefix(string str, int len, int i, int k)
{
    if (i + k > len)
        return false;
    for (int j = 0; j < k; j++)
    {
        if (str[i] != str[j])
            return false;
        i++;
    }
    return true;
}

bool isKPeriodic(string str, int len, int k)
{
    for (int i = k; i < len; i += k)
        if (!isPrefix(str, len, i, k))
            return false;
    return true;
}

//main
int main()
{
    string str;
    cout << "Enter string" << endl;
    cin>>str;
    int len = str.length();
    int k;
    cout << "Enter K number" << endl;
    cin >> k;

    if (isKPeriodic(str, len, k))
        cout << ("Yes");
    else
        cout << ("No");
}
