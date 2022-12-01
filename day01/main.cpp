#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <sstream>

int main() {
  std::ifstream input("input.txt");

  std::string line;

  int cur = 0;

  std::vector<int> res;

  while (std::getline(input, line)) {
    std::stringstream ss(line);

    int x = 0;

    ss >> x;

    if (x == 0) {
      res.push_back(cur);
      cur = 0;
    } else {
      cur += x;
    }
  }

  std::cout << *max_element(res.begin(), res.end()) << "\n";

  return 0;
}