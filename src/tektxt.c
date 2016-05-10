/*
** tektxt.c for tektxt in /home/roux_l/rendu/gfx_scrollert
**
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
**
** Started on  Sat Mar 19 11:54:49 2016 Guillaume Roux
** Last update Sat Mar 19 16:57:03 2016 Guillaume Roux
*/

#include "include/my.h"

void			print_scale(t_bunny_pixelarray *pix,
				    t_bunny_position *pos,
				    t_color *color,
				    int scale)
{
  t_bunny_position	bis;
  int			x;
  int			y;

  y = -1;
  while (++y < scale)
    {
      x = -1;
      while (++x < scale)
	{
	  bis.x = pos->x + x;
	  bis.y = pos->y + y;
	  tekpixel(pix, &bis, color->full);
	}
    }
}

void			aff_letter(t_bunny_pixelarray *pix,
				   t_font *font,
				   char letter,
				   t_bunny_position *pos)
{
  t_bunny_position	bis;
  int			x;
  int			y;
  int			i;
  t_color		color;

  i = letter * font->letter.x;
  y = -1;
  while (++y < font->letter.y)
    {
      x = -1;
      while (++x < font->letter.x)
	{
	  color.full = get_color(font->font, x + i, y);
	  bis.x = pos->x + x * font->scale;
	  bis.y = pos->y + y * font->scale;
	  (bis.x < 0 ? bis.x += WIDTH : 0);
	  (bis.x >= WIDTH ? bis.x = bis.x % WIDTH : 0);
	  (bis.y < 0 ? bis.y += HEIGHT : 0);
	  (bis.y >= HEIGHT ? bis.y = bis.y % HEIGHT : 0);
	  if (color.argb[ALPHA_CMP] > 0)
	    print_scale(pix, &bis, &color, font->scale);
	}
    }
}

void			tektext(t_bunny_pixelarray *pix,
				const char *str,
				t_font *font,
				t_bunny_position *pos)
{
  int			i;
  t_bunny_position	bis;

  i = 0;
  bis.x = pos->x;
  bis.y = pos->y;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	{
	  bis.x = pos->x;
	  bis.y = bis.y + font->letter.y * font->scale + 1;
	}
      else
	{
	  aff_letter(pix, font, str[i], &bis);
	  bis.x = bis.x + font->letter.x * font->scale + 1;
	}
      ++i;
    }
}
