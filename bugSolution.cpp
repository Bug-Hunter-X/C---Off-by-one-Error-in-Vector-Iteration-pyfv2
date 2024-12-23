```cpp
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};
  for (int i = 0; i < vec.size(); ++i) { // Corrected: Using '<' instead of '<=' avoids out-of-bounds access
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
```