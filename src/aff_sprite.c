/*
** aff_sprite.c for aff_sprite in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue Mar 29 09:00:38 2016 Guillaume Roux
** Last update  Tue Mar 29 09:00:38 2016 Guillaume Roux
*/

#include "include/my.h"

void      aff_sprite(t_bunny_pixelarray *pix,
           t_bunny_pixelarray *sprite,
           const t_bunny_position *pos,
           int state)
{
  t_bunny_position      bis;
  int                   x;
  int                   y;
  t_color               color;
  int                   scale;

  scale = state * S_WIDTH;
  y = -1;
  while (++y < S_HEIGHT)
    {
      x = -1;
      while (++x < S_WIDTH)
        {
          color.full = get_color(sprite, x + scale, y);
          bis.x = pos->x + x;
          bis.y = pos->y + y;
          if (color.argb[ALPHA_CMP] > 0)
            tekpixel(pix, &bis, color.full);
        }
    }
}

void                        arthur_sprite(t_bunny_pixelarray *pix, const t_bunny_position *pos, t_blih *prog)
{
  static int                frame = 0;
  static int                state = 0;
  static t_bunny_pixelarray *right = NULL;
  static t_bunny_pixelarray *left = NULL;
  static t_bunny_pixelarray *idle = NULL;
  static t_bunny_position   bis;

  if (right == NULL && left == NULL && idle == NULL)
  {
    right = bunny_load_pixelarray("ress/rightanimation.png");
    left = bunny_load_pixelarray("ress/leftanimation.png");
    idle = bunny_load_pixelarray("ress/standanimation.png");
  }
  frame += 1;
  bis = setup_move(&bis, pos);
  if (frame == 4)
    {
      frame = 0;
      state += 1;
      if (state == 10)
        state = 0;
    }
  if (bis.x > 0 && bis.x < 30 && bis.y > 210 && bis.y < 558)
    prog->scene = 1;
  if (bis.x < (pos->x - S_WIDTH / 2))
    aff_sprite(pix, right, &bis, state);
  else if ((bis.x + S_WIDTH / 2) > pos->x)
    aff_sprite(pix, left, &bis, state);
  else
    aff_sprite(pix, idle, &bis, state);
}

void                        simon_sprite(t_bunny_pixelarray *pix, const t_bunny_position *pos, t_blih *prog)
{
  static int                frame = 0;
  static int                state = 0;
  static t_bunny_pixelarray *right = NULL;
  static t_bunny_pixelarray *left = NULL;
  static t_bunny_pixelarray *idle = NULL;
  static t_bunny_position   bis;

  if (right == NULL && left == NULL && idle == NULL)
  {
    right = bunny_load_pixelarray("ress/rightanimation.png");
    left = bunny_load_pixelarray("ress/leftanimation.png");
    idle = bunny_load_pixelarray("ress/standanimation.png");
  }
  frame += 1;
  bis = simon_move(&bis, pos);
  if (frame == 4)
    {
      frame = 0;
      state += 1;
      if (state == 10)
        state = 0;
    }
  if (bis.x > 0 && bis.x < 30 && bis.y > 210 && bis.y < 558)
    prog->scene = 1;
  if (bis.x < (pos->x - S_WIDTH / 2))
    aff_sprite(pix, right, &bis, state);
  else if ((bis.x + S_WIDTH / 2) > pos->x)
    aff_sprite(pix, left, &bis, state);
  else
    aff_sprite(pix, idle, &bis, state);
}