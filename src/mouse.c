/*
** mouse.c for mouse in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Thu Mar 31 10:06:15 2016 Guillaume Roux
** Last update  Thu Mar 31 10:06:15 2016 Guillaume Roux
*/

#include "include/my.h"

void                    aff_mouse(t_bunny_pixelarray *pix,
                                t_bunny_pixelarray *arthur,
                                const t_bunny_position *pos,
                                int state)
{
  t_bunny_position      bis;
  int                   x;
  int                   y;
  t_color               color;
  int                   scale;

  scale = state * 17;
  y = -1;
  while (++y < 22)
    {
      x = -1;
      while (++x < 17)
        {
          color.full = get_color(arthur, x + scale, y);
          bis.x = pos->x + x;
          bis.y = pos->y + y;
          if (color.argb[ALPHA_CMP] > 0)
            tekpixel(pix, &bis, color.full);
        }
    }
}

void                            sprite_mouse(t_bunny_pixelarray *pix, int state, const t_bunny_position *pos)
{
  static t_bunny_pixelarray     *arthur = NULL;

  if (arthur == NULL)
    arthur = bunny_load_pixelarray("ress/sprite_souris.png");
  aff_mouse(pix, arthur, pos, state);
}