#include <iostream>
#include <stack>

void solution(char *word, int lenght) {
  std::stack<char> stack;
  int i = lenght, j = 0;
  while (i-- != lenght / 2)
    stack.push(word[j++]);

  if (i % 2 == 0) {
    i++;
    stack.pop();
  }

  while (!stack.empty() && stack.top() == word[i++])
    stack.pop();

  if (stack.empty())
    std::cout << word << ":"
              << "YES" << std::endl;
  else
    std::cout << word << ":"
              << "NO" << std::endl;
}

int main(int argc, char *argv[]) {
  char w1[] = "hellolleh";
  char w2[] = "madajskjA";
  char w3[] = "nameeman";
  solution(w1, sizeof(w1));
  solution(w2, sizeof(w2));
  solution(w3, sizeof(w3));
  return 0;
}
