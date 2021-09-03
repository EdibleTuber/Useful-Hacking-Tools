#include <stddef.h>
#include <unistd.h>

int main()
{
	execve('/bin/sh',0,0);
}
