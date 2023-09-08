#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
  int n1 = 0, n2 = 0;
  for (int i = 0; input1[i] != '\0'; i++) {
    n1++;
  }
  for (int j = 0; input2[j] != '\0'; j++) {
    n2++;
  }
  if (n1 == n2) {
    sort(input1, input1 + n1);
    sort(input2, input2 + n2);
    for (int j = 0; input2[j] != '\0'; j++) {
      if (input1[j] == input2[j]) {
        continue;
      } else {
        return false;
      }
    }
    return true;

  } else {
    return false;
  }
}

int main() {
  int size = 1e6;
  char str1[size];
  char str2[size];
  cin >> str1 >> str2;
  cout << (isPermutation(str1, str2) ? "true" : "false");
}