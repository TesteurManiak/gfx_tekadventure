/*
** get_color.c for get_color in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Fri Mar 25 16:31:05 2016 Guillaume Roux
** Last update  Fri Mar 25 16:31:05 2016 Guillaume Roux
*/

#include "include/my.h"

unsigned int  get_color(t_bunny_pixelarray *pix, int x, int y)
{
  if (x >= 0 && x <= pix->clipable.clip_width
      && y >= 0 && y <= pix->clipable.clip_height)
    return (((unsigned int *)pix->pixels)[y * pix->clipable.clip_width + x]);
  return (0);
}