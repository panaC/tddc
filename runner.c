/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pleroux@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 10:46:33 by pierre            #+#    #+#             */
/*   Updated: 2018/01/27 13:32:27 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "tddc.h"

int tests_run = 0;

int square(int x)
{
	return (x * x);
}

int square_01() {
	int x=5;
	_assert(square(x) == 25);
	return 0;
}

int all_tests() {
	_verify(square_01);
	return 0;
}

int main(int argc, char **argv) {
	int result = all_tests();
	if (result == 0)
		printf("\nRESULT : PASSED\n");
	printf("Tests run: %d\n", tests_run);

	return result != 0;
}
