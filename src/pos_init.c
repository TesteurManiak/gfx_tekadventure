/*
** pos_init.c for init_pos in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Fri Apr 15 17:46:16 2016 Guillaume Roux
** Last update  Fri Apr 15 17:46:16 2016 Guillaume Roux
*/

#include "include/my.h"

t_bunny_position  *init_plage()
{
  t_bunny_position pos;

  pos.x = 860;
  pos.y = 440;
  return (&pos); 
}

t_bunny_position  *init_water()
{
  t_bunny_position pos;

  pos.x = 860;
  pos.y = 440;
  return (&pos); 
}

t_bunny_position  *init_forest()
{
  t_bunny_position pos;

  pos.x = 522;
  pos.y = 500;
  return (&pos);
}