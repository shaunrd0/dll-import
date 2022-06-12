
Test project using DllImport with a shared C++ library.
This was developed and tested on Ubuntu 20.04.

```bash
git clone git@github.com:shaunrd0/dll-import
cd dll-import/CppPalindrome
mkdir build && cd build
cmake .. && cmake --build .
cd ../../DllImport
dotnet run
```

Example output

```
String palindrome test using C++ and DllImport
Input a string to test: racecar
The input string 'racecar' is a palindrome
```

