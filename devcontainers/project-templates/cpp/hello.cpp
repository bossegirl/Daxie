#include <iostream>
#include <vector>

int
main ()
{
  std::vector<int> v;
  for (int i : {5, 4, 3, 2, 1})
  {
    v.push_back (i);
  }

  for (auto val : v)
  {
    std::cout << val << ' ';
  }
  std::cout << "\nHello, My Name is Daxie Waxie!" << std::endl;


  return 0;
}
