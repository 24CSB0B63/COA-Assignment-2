// #include <iostream>
// #include <cmath>
// using namespace std;

// string binify(int n) {
//     string binary = "";
//     int cpy = abs(n);
//     int length = 5;

//     while(cpy > 0) {
//         binary = to_string(cpy % 2) + binary; 
//         cpy /= 2;
//     }

//     while(binary.length() < length) { //length
//         binary = "0" + binary;
//     }

//     if(n < 0) {
//         for(auto &i : binary){
//             if(i == '0') i = '1';
//             else i = '0';
//         }

//         char carry = '1';

//         for(int i = binary.length() - 1; i >= 0; i--) {
//             if(binary[i] == '1' && carry == '1' ) {
//                 binary[i] = '0';
//             }
//             else if(binary[i] == '0' && carry == '1') {
//                 binary[i] = '1';
//                 carry = '0';
//             }
//         }
//         if(carry == '1') {
//             binary = "1" + binary;
//         }
//     }
//     if(binary.length() > length) cout<<"no. was too long to represent with "<<length<<" bits"<<endl;

//     return binary;
// }

// string subtract(int n1, int n2) {
//     string bin1 = binify(n1), bin2 = binify(-n2);
//     bool overflow = 0;
//     if(bin1.size() != bin2.size()) overflow = 1;
//     if(overflow) {
//         int maxS = max(bin1.length(), bin2.length());
//         bool smaller = 0; //0 means bin1 is smaller
//         if(maxS == bin1.length()) smaller = 1;

//         if(!smaller) {
//             while(bin1.length() < maxS) bin1 = bin1[0] + bin1;
//         }
//         else {
//             while(bin2.length() < maxS) bin2 = bin2[0] + bin2;
//         }
//     }

//     string sum = "";
//     char carry = '0';

//     int length = bin1.length();

//     for(int i = length - 1; i >= 0; i--) {
//         int bit1 = bin1[i] - '0';
//         int bit2 = bin2[i] - '0';
//         int c = carry - '0';
        
//         int total = bit1 + bit2 + c;
        
//         sum = to_string(total % 2) + sum;
//         carry = (total >= 2) ? '1' : '0';
//     }

//     if(carry == '1') sum = "1" + sum;
//     int curSize = sum.length();
//     if(curSize > 5) {
//         sum.erase(0, curSize - 5);
//     }
//     return sum;
// }

// int bintoInt(string s) {
//     int res = 0;
//     bool neg = 0;
//     if(s[0] == '1')  {
//         int ptr = 4;
//         while(s[ptr--] != '1');
//         ptr++;
//         s[ptr] = '0';
//         while(ptr < 5) {
//             s[++ptr] = '1';
//         }
//         for(int i = 0; i < 5; i++) {
//             if(s[i] == '1') s[i] = '0';
//             else s[i] = '1';
//         }
//         neg = 1;
//     }
    
//     for(int i = s.size() - 1, count = 0; i >= 0; i--, count++) {
//         res += pow(2, count) * (s[i] - '0');
//     }
    
//     return neg?-res:res;
// }


// int main() {    
//     int n1, n2;
//     cin>>n1 >> n2;
//     string b1 = binify(n1), b2 = binify(-n2);
//     string diff = subtract(n1, n2);
//     cout<<b1<<"\n"<<b2<<endl;
//     cout<<diff<<endl;
//     if ((n1 >= 0 && n2 < 0 && bintoInt(diff) < 0) || (n1 < 0 && n2 >= 0 && bintoInt(diff) >= 0)) {
//         cout << "overflow" << endl;
//     }

    
//     cout<<bintoInt(diff);

//     return 0;
// }

// #include <iostream>
// using namespace std; 

// int main() {
//     string s = "1111111111111111111111111111111111111111111111111111111111110111";
//     for(char &i : s) {
//         if(i == '1') i = '0';
//         else i = '1';
//     }
//     cout<<s;
// }
//bit flipper