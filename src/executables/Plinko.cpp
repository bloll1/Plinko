//@Author: Conor M Golden
//@Email: Goldencm203@potsdam.edu

#include <iostream>
#include "process.h"
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  if (argc != 3) {
    std::cerr << "\n\nusage: " << " <number_of_rows> <number_of_columns>" <<
     std::endl << "         <number_of_rows> - number of plinko rows" <<
     std::endl << "         <number_of_columns> - number of plinko columns" <<
     std::endl;
         return 1;
  }

  int nrow = atoi(argv[1]);
  int ncolumns = atoi(argv[2]);
  srand (time(NULL));
  int random_x = rand() % nrow + 1;

  int win = draw(nrow , ncolumns, 0, random_x);

  std::cout << "\nYou Win: " << win << "\n";
  return 0;
}
