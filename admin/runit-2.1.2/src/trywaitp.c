/* Public domain. */

#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    waitpid(0, 0, 0);
}
