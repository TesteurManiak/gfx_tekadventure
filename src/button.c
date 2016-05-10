/*
** button.c for button in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Wed Mar 30 17:05:07 2016 Guillaume Roux
** Last update  Wed Mar 30 17:05:07 2016 Guillaume Roux
*/

#include "include/my.h"

void                    aff_button(t_bunny_pixelarray *pix,
                                t_bunny_pixelarray *arthur,
                                t_bunny_position *pos,
                                int state,
                                int width,
                                int height)
{
  t_bunny_position      bis;
  int                   x;
  int                   y;
  t_color               color;
  int                   scale;

  scale = state * width;
  y = -1;
  while (++y < height)
    {
      x = -1;
      while (++x < width)
        {
          color.full = get_color(arthur, x + scale, y);
          bis.x = pos->x + x;
          bis.y = pos->y + y;
          if (color.argb[ALPHA_CMP] > 0)
            tekpixel(pix, &bis, color.full);
        }
    }
}

void                            sprite_but(t_bunny_pixelarray *pix, int state)
{
  static t_bunny_pixelarray     *arthur = NULL;
  t_bunny_position              pos;

  pos.x = 317;
  pos.y = 410;
  if (arthur == NULL)
    arthur = bunny_load_pixelarray("ress/sprite_button.png");
  aff_button(pix, arthur, &pos, state, 416, 145);
}

void                            sprite_bouton(t_bunny_pixelarray *pix, int state)
{
  static t_bunny_pixelarray     *arthur = NULL;
  t_bunny_position              pos;

  pos.x = 97;
  pos.y = 672;
  if (arthur == NULL)
    arthur = bunny_load_pixelarray("ress/sprite_bouton.png");
  aff_button(pix, arthur, &pos, state, 129, 42); 
}

void                            sprite_obs(t_bunny_pixelarray *pix, int state)
{
  static t_bunny_pixelarray     *arthur = NULL;
  t_bunny_position              pos;

  pos.x = 716;
  pos.y = 672;
  if (arthur == NULL)
    arthur = bunny_load_pixelarray("ress/bouton_obs.png");
  aff_button(pix, arthur, &pos, state, 229, 42); 
}