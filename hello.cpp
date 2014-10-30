#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  // Default is "World"
  string name = "World";
  if (argc == 2)
    cout << "Hello, " << argv[1] << "!" << endl;
  else
    cout << "Hello, " << name << "!" << endl;
  return 0;
}
