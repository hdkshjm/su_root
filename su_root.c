#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
   setuid( 0 );
   system(  "/usr/bin/sudo su -" );

   return 0;
}
