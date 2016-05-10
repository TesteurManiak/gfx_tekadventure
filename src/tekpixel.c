/*
** tekpixel.c for tekpixel in /home/roux_l/rendu/mystic_2020
**
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
**
** Started on  Fri Feb 12 14:03:42 2016 Guillaume Roux
** Last update Sat Mar 19 11:51:08 2016 Guillaume Roux
*/

#include "include/my.h"

void    tekpixel(t_bunny_pixelarray *pix,
                  t_bunny_position *pos,
                  unsigned int color)
{
  ((unsigned int *)pix->pixels)[(pix->clipable.clip_width * pos->y) + pos->x] = color;
}
