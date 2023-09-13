int	ft_check_colup(int board, int col, int row, int size)
{
	int	ctr;/*ctr es el contador de edificios visibles*/
	int	top;/*top es el contador de hasta qué casilla he comprobado*/
	int	max;/*valor del edificio más alto visto hasta ahora*/
	int	zero;/*el número de 0s vistos*/

	ctr = 1;/*siempre vamos a ver al menos un edificio*/
	top = 0;/*empezamos por la fila 0*/
	zero = 0;/*por ahora no hemos visto ningún 0*/
	dir = 0;/*en mi caso la dir 0 es de arriba a abajo*/
	max = board [0][col];/*altura del 1er edificio*/
	while (top < size)/*mientras no hayamos alcanzado la casilla final de la col*/
	{
		if (board[top][col] == 0)/*si el valor de la casilla es 0*/
			zero++;/*contamos un 0 más*/
		if (board[top][col] > max)/*si el valor es mayor que la mayor altura vista*/
		{
			ctr++;/*aumentamos el valor a comparar*/
			max = board [top][col];/*actualizamos el valor del edif más alto vist*/
		}
		top++;/*aumentamos la referencia de la casilla a comprobar*/
	}
	ft_comp(ctr, 0, board, zero);/*llamamos poniendo 0 como "dir"*/
}
