/*
** dim_letter.c for dim_letter in /home/roux_l/rendu/gfx_scrollert
**
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
**
** Started on  Sat Mar 19 11:44:25 2016 Guillaume Roux
** Last update Sat Mar 19 17:05:35 2016 Guillaume Roux
*/

#include "include/my.h"

t_bunny_position	dim_letter(t_bunny_pixelarray *pix)
{
  t_bunny_position	letter;

  letter.x = pix->clipable.buffer.width / 128;
  letter.y = pix->clipable.buffer.height;
  return (letter);
}
