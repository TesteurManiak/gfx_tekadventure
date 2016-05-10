/*
** make_move.c for make_move in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Fri Apr 1 09:00:04 2016 Guillaume Roux
** Last update  Fri Apr 1 09:00:04 2016 Guillaume Roux
*/

#include "include/my.h"

t_bunny_position          *make_move(t_blih *prog, const t_bunny_position *pos)
{
  static t_bunny_position init;
  static t_bunny_position bis;

  if (init.x != 860)
  {
    init.x = 860;
    init.y = 440;
    bis.x = init.x;
    bis.y = init.y;
  }
  else if (prog->button == 0 && pos->y >= 410 && pos->y <= 558)
  {
    bis.x = pos->x;
    bis.y = pos->y;
  }
  arthur_sprite(prog->pix, &bis, prog);
  return (&bis);
}

t_bunny_position          *move_forest(t_blih *prog, const t_bunny_position *pos)
{
  static t_bunny_position init;
  static t_bunny_position bis;

  if (init.x != 522)
  {
    init.x = 522;
    init.y = 500;
    bis.x = init.x;
    bis.y = init.y;
  }
  else if (prog->button == 0 && pos->y >= 393 && pos->y <= 590 &&
      pos->x >= 335 && pos->x <= 694)
  {
    bis.x = pos->x;
    bis.y = pos->y;
  }
  simon_sprite(prog->pix, &bis, prog);
  return (&bis);
}