#include <iostream>
using namespace std;

string binify(int n) {
    string binary = "";
    int cpy = abs(n);
    while(cpy > 0) {
        binary = to_string(cpy % 2) + binary; 
        cpy /= 2;
    }
    while(binary.length() < 7) { //length
        binary = "0" + binary;
    }
    if(n < 0) {
        for(auto &i : binary){
            if(i == '0') i = '1';
            else i = '0';
        }

        char carry = '1';

        for(int i = binary.length() - 1; i >= 0; i--) {
            if(binary[i] == '1' && carry == '1' ) {
                binary[i] = '0';
            }
            else if(binary[i] == '0' && carry == '1') {
                binary[i] = '1';
                carry = '0';
            }
        }
        if(carry == '1') {
            binary = "1" + binary;
        }
    }
    return binary;
}

int main() {
    int n;  
    cin >> n;
    int cpy = abs(n);
    cout << binify(n);
    return 0;
}