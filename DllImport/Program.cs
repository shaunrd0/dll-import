using System.Runtime.InteropServices;

Console.WriteLine("String palindrome test using C++ and DllImport");
Console.Write("Input a string to test: ");
// If there is no input, testStr should be an empty string
String testStr = Console.ReadLine() ?? String.Empty;

bool result = IsPalindrome(testStr.ToCharArray(), testStr.Length);
Console.WriteLine($"The input string '{testStr}' {(result ? "is" : "is not")} a palindrome");

[DllImport(@"../../../libpalindrome.so")]
static extern unsafe bool IsPalindrome(char[] str, int len);
