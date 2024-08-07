#include <cctype>
#include <string>

std::string toLowerCase(std::string const &str) {
  std::string ans;      // Initialize as an empty string
  for (char ch : str) { // Use char ch (pass by value, no need for reference)
    ans += std::tolower(
        static_cast<unsigned char>(ch)); // Convert and append to ans
  }
  return ans;
}
