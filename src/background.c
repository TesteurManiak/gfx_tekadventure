/*
** background.c for background in /home/roux_l/rendu/gfx_scroller/src
**
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
**
** Started on  Sat Mar 19 17:14:33 2016 Guillaume Roux
** Last update Sat Mar 19 17:32:53 2016 Guillaume Roux
*/

#include "include/my.h"

void                            aff_background(t_bunny_pixelarray *pix)
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
    img = bunny_load_pixelarray("ress/background.png");
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

void                            map(t_bunny_pixelarray *pix)
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
    img = bunny_load_pixelarray("ress/map.png");
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

void                            fond_mer(t_bunny_pixelarray *pix)
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
    img = bunny_load_pixelarray("ress/fond_marin.png");
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

void                            plage(t_bunny_pixelarray *pix)
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
    img = bunny_load_pixelarray("ress/plage.png");
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

void                            aff_title(t_bunny_pixelarray *pix)
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
    img = bunny_load_pixelarray("ress/title_board.png");
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