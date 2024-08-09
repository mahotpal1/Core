#include <iostream>
#include <string>

// Global Static Variable  - Only accessible in StaticVariable File.
  static int globalCount=0;

class StaticVariables{
  public:
    void incrementCallStack(){
      // count is static local variable, only once initialized. 
      static int count = 0;
      count++;
      std::cout << "Current count value: " << count << std::endl;
    }
};

int main(){
  StaticVariables st = StaticVariables();

  st.incrementCallStack();
  st.incrementCallStack();
  st.incrementCallStack();

  return 0;
}