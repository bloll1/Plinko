
#ifndef PROCESS
#define PROCESS

int draw(int number_of_rows, int number_of_columns, int position_x, int position_y);

void update(int number_of_rows, int number_of_columns, int old_position_x, int old_position_y);

int calculate_x(int old_x);

int calculate_y(int old_y);

#endif /* process */
