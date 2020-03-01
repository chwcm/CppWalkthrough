#include<iostream>

using namespace std;

int main() {
  int n;
  int count = 0;
  int sum = 0;
  
  cin >> n;
  
  while (n != 0) {
    sum = sum + n % 10;
    n = n / 10;
    count++;
  }

  cout << count << endl;
  cout << sum<<endl;
}
