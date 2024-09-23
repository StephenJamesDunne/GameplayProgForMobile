// Lab 2 Questions
// Stephen Dunne
// C00194821

#pragma once

#include <iostream>
// dont use cout in any of the functions apart from PrintArray();
int ReplaceWithMinusOne(int array[4][6])
{
	int score = 0;


	// first set of loops checks for horizontal scores in grid:
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 6; column++)
		{
			if (array[row][column] != 0)
			{
				int count = 1; // resets current count back down to 1 for each check of scoreable tiles

				while (column + 1 < 6 && array[row][column] == array[row][column + 1]) // stay within grid boundary and check the adjacent column
				{
					count++;
					column++; // move to next column
				}

				if (count >= 3)
				{
					score += array[row][column] * count; // value in scoreable tileset added to score received (e.g., 3 tiles of 1 * count(3) = 3)

					//std::cout << "\n- Scoring row: " << row + 1 << ", columns " << (column - (count + 1)) << " to " << column + 1 << "\n";

					for (int scoretiles = column - count + 1; scoretiles <= column; scoretiles++) // (column - count + 1) is the starting scoreable tile
					{
						array[row][scoretiles] = -1;
					}
				}
			}
		}
	}

	// second set of loops to check vertical scoreables on the grid:
	for (int column = 0; column < 6; column++)
	{
		for (int row = 0; row < 4; row++)
		{
			if (array[row][column] != 0)
			{
				int count = 1;	// resets current count back down to 1 for each check of scoreable tiles

				while (row + 1 < 4 && array[row][column] == array[row + 1][column]) // stay within grid boundary and check the adjacent row
				{
					count++;
					row++;	// move to next row
				}
				if (count >= 3)
				{
					score += array[row][column] * count;

					//std::cout << "\n- Scoring column: " << column + 1 << ", rows: " << row - count + 1 << " to " << row << "\n";

					for (int scoretiles = row - count + 1; scoretiles <= row; scoretiles++) // (column - count + 1) is the starting scoreable tile
					{
						array[scoretiles][column] = -1;
					}
				}
			}
		}
	}

	return score;
}
void FallDownAndReplace(int array[4][6])
{
	for (int column = 0; column < 6; column++)
	{
		for (int row = 4; row > 0; row--) // start at last row moving upwards
		{
			if (array[row][column] == -1)
			{
				for (int movingRow = row; movingRow > 0; movingRow--) // start from current row and move upwards
				{
					array[movingRow][column] = array[movingRow - 1][column]; // moves all numbers above the -1 down one position
					array[0][column] = -2;
				}
			}
		}
	}

}
void PrintArray(int array[4][6])
{
	std::cout << "      Game Grid: \n" << std::endl;
	for (int rows = 0; rows < 4; rows++)
	{
		std::cout << "     ";
		for (int cols = 0; cols < 6; cols++)
		{
			std::cout << array[rows][cols] << " ";
		}
		std::cout << std::endl;
	}
}
