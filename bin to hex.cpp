#include <iostream>
#include <cmath>
using namespace std;

long long bintoInt(string s) {
    int res = 0;
    int size = s.length();
    for(int i = size - 1, count = 0; i >= 0; i--, count++) {
        res += pow(2, count) * (s[i] - '0');
    }
    return res;
}

string intohex(int n) {
    if(n == 0) return "0";
    string hex = "";
    string hexChars = "0123456789ABCDEF";
    while(n > 0) {
        int rem = n % 16;
        hex = hexChars[rem] + hex;
        n /= 16;
    }

    return hex;
}

int main() {
    string bin;
    cin>>bin;
    long long n = bintoInt(bin);
    cout<<n<<endl;
    cout<<intohex(n);
}