#ifndef RT_H_
# define RT_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include "get_next_line.h"

typedef struct s_camera
{
  char		*name;
  float		x;
  float		y;
  float		z;
  float		fov;
  float		lookAtX;
} t_camera;

#endif /* !RT_H__ */
