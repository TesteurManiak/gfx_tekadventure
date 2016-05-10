/*
** forest.c for forest in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Wed Apr 13 15:47:14 2016 Guillaume Roux
** Last update  Wed Apr 13 15:47:14 2016 Guillaume Roux
*/

#include "include/my.h"

void                            fond_forest(t_bunny_pixelarray *pix)
{
  t_bunny_position              pos;
  t_bunny_position              bis;
  t_color                       color;
  int                           x;
  int                           y;
  static t_bunny_pixelarray     *img = NULL;


  pos.x = 0;
  pos.y = 0;
  if (img == NULL)
    img = bunny_load_pixelarray("ress/forest.png");
  y = -1;
  while (++y < HEIGHT)
    {
      x = -1;
      while (++x < WIDTH)
        {
          color.full = get_color(img, x, y);
          bis.x = pos.x + x;
          bis.y = pos.y + y;
          if (color.argb[ALPHA_CMP] > 0)
            tekpixel(pix, &bis, color.full);
        }
    }
}