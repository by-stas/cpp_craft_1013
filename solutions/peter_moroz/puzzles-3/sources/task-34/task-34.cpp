#include <iostream>
#include <exception>
#include "Task34.h"

using namespace std;

static const unsigned kFirstFileNumber = 1;
static const unsigned kLastFileNumber = 999;

int main() {

  Task34 task;

  try {
    task.set_start_file_number(kFirstFileNumber);
    task.set_number_of_files(kLastFileNumber - kFirstFileNumber + 1);
    task.Perform();
  } catch (const exception& ex) {
    cout << "An exception has been caught. "
      << "Reason: " << ex.what() << endl;
    return -1;
  }

  return 0;
}
