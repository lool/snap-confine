/*
 * Copyright (C) 2015 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "unit-tests.h"
#include <glib.h>

static void simple_test_case(void)
{
	g_assert(g_bit_storage(1) == 1);
	g_assert_cmpint(g_bit_storage(1), ==, 1);
}

int sc_run_unit_tests(int *argc, char ***argv)
{
	g_test_init(argc, argv, NULL);
	g_test_set_nonfatal_assertions();
	g_test_add_func("/Simple Test Case", simple_test_case);
	return g_test_run();
}
