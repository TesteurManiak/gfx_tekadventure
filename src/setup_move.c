/*
** setup_move.c for setup_move in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Wed Mar 30 10:05:13 2016 Guillaume Roux
** Last update  Wed Mar 30 10:05:13 2016 Guillaume Roux
*/

#include "include/my.h"

t_bunny_position    setup_move(t_bunny_position *origin, const t_bunny_position *dest)
{
  static int        i = 0;
  t_bunny_position  pos;

  pos.x = origin->x;
  pos.y = origin->y;
  if (origin->x < (dest->x - S_WIDTH / 2))
    pos.x++;
  else if ((origin->x + S_WIDTH / 2) > dest->x)
    pos.x--;
  if (origin->y < (dest->y - S_HEIGHT + 10))
    pos.y++;
  else if ((origin->y + S_HEIGHT - 10) > dest->y)
    pos.y--;
  if (i == 0)
  {
    pos.x = 840;
    pos.y = 345;
    i++;
  }
  return (pos);
}

t_bunny_position    simon_move(t_bunny_position *origin, const t_bunny_position *dest)
{
  static int        i = 0;
  t_bunny_position  pos;

  pos.x = origin->x;
  pos.y = origin->y;
  if (origin->x < (dest->x - S_WIDTH / 2))
    pos.x++;
  else if ((origin->x + S_WIDTH / 2) > dest->x)
    pos.x--;
  if (origin->y < (dest->y - S_HEIGHT + 10))
    pos.y++;
  else if ((origin->y + S_HEIGHT - 10) > dest->y)
    pos.y--;
  if (i == 0)
  {
    pos.x = 500;
    pos.y = 400;
    i++;
  }
  return (pos);
}