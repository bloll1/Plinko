#include "process.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int draw(int number_of_rows, int number_of_columns, int position_x, int position_y) {

  for (int x = 0; x < number_of_rows; x++) {
    if (x % 2) {
      std::cout << " ";
    }
    for (int y = 0; y < number_of_columns; y++) {
      if (y == position_y && x == position_x) {
        std::cout << "0";
      } else {
        std::cout << " ";
      }
      std::cout << "* ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
  }
if (position_x != number_of_columns) {
  update(number_of_rows, number_of_columns, position_x, position_y);
  }
return position_y;

}


void update(int number_of_rows, int number_of_columns, int old_position_x, int old_position_y) {
  usleep(150000);
  system ("clear");
  int new_x = calculate_y(old_position_x);
  int new_y = calculate_x(old_position_y);
  draw( number_of_rows,  number_of_columns,  new_x,  new_y);
}

int calculate_x(int old_x) {
  srand (time(NULL));
  int x = old_x;
  int direction = rand() % 2 + 1;
  if (old_x == 0) {
    x++;
  } else if (direction == 1) {
    x--;
  } else {
    x++;
  }
  return x;
}

int calculate_y(int old_y) {
  int y = old_y;
  y++;
  return y;
}
