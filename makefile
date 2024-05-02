run: linked_list_tester.c
	clang linked_list_tester.c -o linked_list_tester

leaks: linked_list_tester.c
	clang linked_list_tester.c -o linked_list_tester
	leaks --atExit -- ./linked_list_tester