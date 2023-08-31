#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar()
{
    return (char) ('A' + rand() % 26);
}
