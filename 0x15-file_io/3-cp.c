#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: len of arg.
 * @argv: distenation file and source file.
 *
 * Description: Usage (cp file_from file_to)
 *
 * if the number of argument is not the correct one,
 * exit with code 97 and print Usage: cp file_from file_to,
 * followed by a new line, on the POSIX standard error.
 *
 * if file_to already exists, truncate it.
 *
 * f file_from does not exist,
 * or if you can not read it,
 * exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the first argument passed to your program.
 *
 * if you can not create or
 * if write to file_to fails,
 * exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the second argument passed to your program.
 *
 * if you can not close a file descriptor ,
 * exit with code 100 and print Error: Can't close fd FD_VALUE,
 * followed by a new line, on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor.
 *
 * Permissions of the created file: rw-rw-r--.
 *
 * If the file already exists, do not change the permissions.
 *
 * You must read 1,024 bytes at a time
 * from the file_from to make less system calls.
 * Use a buffer You are allowed to use dprintf
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int f_from, f_to, rf, wf;
	char buff[1024];

	if (argc != 3)
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (1)
	{
		rf = read(f_from, buff, 1024);

		if (rf == 0)
			break;
		else if (rf == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

		wf = write(f_to, buff, rf);
		if (wf == -1)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}


	if (close(f_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", f_from), exit(100);

	if (close(f_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", f_to), exit(100);

	return (0);
}
